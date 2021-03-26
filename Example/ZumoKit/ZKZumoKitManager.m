//
//  ZKZumoKitManager.m
//  ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//  Copyright © 2019 steve228uk. All rights reserved.
//

#import "ZKZumoKitManager.h"
#import <ZumoKit/ZumoKit.h>

@interface ZKZumoKitManager ()

@property (strong, nonatomic) ZumoKit *zumoKit;
@property (strong, nonatomic) ZKUser *user;
@property (strong, nonatomic) ZKWallet *wallet;

@end

@implementation ZKZumoKitManager

+ (id)sharedManager {
    static ZKZumoKitManager *manager = nil;
    @synchronized(self) {
        if (manager == nil)
            manager = [[self alloc] init];
    }
    return manager;
}

- (void)onDataChange:(nonnull NSArray<ZKAccountDataSnapshot *> *)snapshots
{
    // Do something with account data
    NSLog(@"On data change listener called");
}

- (void)initialize {
    NSLog(@"ZumoKit SDK version: %@", [ZumoKit version]);
    
    NSBundle* mainBundle = [NSBundle mainBundle];
    
    // ZumoKit config
    NSString *apiKey = [mainBundle objectForInfoDictionaryKey:@"API_KEY"];
    NSString *apiUrl = [mainBundle objectForInfoDictionaryKey:@"API_URL"];
    NSString *transactionServiceUrl = [mainBundle objectForInfoDictionaryKey:@"TRANSACTION_SERVICE_URL"];
    NSString *cardServiceUrl = [mainBundle objectForInfoDictionaryKey:@"CARD_SERVICE_URL"];
    
    // Client config
    NSURL *clientZumoKitAuthEndpoint = [NSURL URLWithString:[mainBundle objectForInfoDictionaryKey:@"CLIENT_ZUMOKIT_AUTH_ENDPOINT"]];
    NSError *e = nil;
    NSDictionary *clientHeaders = [NSJSONSerialization JSONObjectWithData:[[mainBundle objectForInfoDictionaryKey:@"CLIENT_HEADERS"] dataUsingEncoding:NSUTF8StringEncoding] options: NSJSONReadingMutableContainers error: &e];
    NSString *userWalletPassword = [mainBundle objectForInfoDictionaryKey:@"USER_WALLET_PASSWORD"];;
    
    // Initialize ZumoKit
    _zumoKit =  [[ZumoKit alloc] initWithApiKey:apiKey
                                         apiUrl:apiUrl
                          transactionServiceUrl:transactionServiceUrl
                                 cardServiceUrl:cardServiceUrl];
    
    // Get ZumoKit user token
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:clientZumoKitAuthEndpoint];
    [request setHTTPMethod:@"POST"];
    [request setAllHTTPHeaderFields:clientHeaders];
    
    NSURLSession *session = [NSURLSession sharedSession];
    
    NSURLSessionDataTask *task = [session
                                  dataTaskWithRequest:request
                                  completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error)
                                  {
        if(error) {
            NSLog(@"error: %@", [error localizedDescription]);
            return;
        }
        
        NSHTTPURLResponse *httpResponse = (NSHTTPURLResponse *) response;
        
        short statusCode = (unsigned short) [httpResponse statusCode];
        if (statusCode != 200) {
            NSString *error = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
            NSLog(@"error: %@", error);
            return;
        }
        
        NSString *userTokenSet = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
        [_zumoKit signIn:userTokenSet completion: ^(ZKUser * _Nullable user, NSError * _Nullable error) {
            if (error != nil) {
                NSLog(@"Auth error: %@", [error userInfo]);
                return;
            }
            
            NSLog(@"User id: %@", [user getId]);
            _user = user;
            
            [_user addAccountDataListener:self];
            
            if ([_user hasWallet]) {
                ZKAccount *ethAccount = [_user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
                NSLog(@"ETH account: %@", ethAccount.cryptoProperties.address);
                
                ZKAccount *btcAccount = [_user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
                NSLog(@"BTC account: %@", btcAccount.cryptoProperties.address);
                
                ZKAccount *fiatAccount = [_user getAccount:@"GBP" network:ZKNetworkTypeTESTNET type:ZKAccountTypeSTANDARD];
                if (fiatAccount != nil) {
                    NSLog(@"GBP account: %@", fiatAccount.fiatProperties.accountNumber);
                }
                    
                [_user unlockWallet:userWalletPassword completion:^(ZKWallet * _Nullable wallet, NSError * _Nullable error) {
                    if (error != nil) {
                        NSLog(@"error: %@", [error description]);
                        return;
                    }
                    
                    _wallet = wallet;
                    
                    [self composeEthTransaction:ethAccount submit:NO];
                    [self composeBtcTransaction:btcAccount submit:NO];
                    
                    [self composeExchange:ethAccount
                                toAccount:btcAccount
                             exchangeRate:[_zumoKit getExchangeRates][@"ETH"][@"BTC"]
                          exchangeSetting:[_zumoKit getExchangeSettings][@"ETH"][@"BTC"]
                                   amount:[NSDecimalNumber decimalNumberWithString:@"0.1"]
                                   submit:NO];
                }];
            } else {
                NSString *mnemonicPhrase = [[_zumoKit getUtils] generateMnemonic:12];
                
                [_user createWallet: mnemonicPhrase password:userWalletPassword completion:^(ZKWallet * _Nullable wallet, NSError * _Nullable error) {
                    if (error != nil) {
                        NSLog(@"error: %@", [error description]);
                        return;
                    }
                    
                    ZKAccount *ethAccount = [user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
                    NSLog(@"ETH account: %@", ethAccount.cryptoProperties.address);
                    
                    ZKAccount *btcAccount = [user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
                    NSLog(@"BTC account: %@", btcAccount.cryptoProperties.address);
                    
                }];
            }
        }];
    }];
    
    NSLog(@"Requesting %@", clientZumoKitAuthEndpoint);
    [task resume];
}

- (void)composeEthTransaction:(ZKAccount *)account
                       submit:(BOOL)submit {
    [_wallet composeEthTransaction:account.id
                          gasPrice:[NSDecimalNumber decimalNumberWithString:@"60"]
                          gasLimit:21000
                       destination:@"0xD797c81C928a7F4CF7dEB960B5963697fAcFE0eE"
                            amount:[NSDecimalNumber decimalNumberWithString:@"0.01"]
                              data:nil
                             nonce:[NSNumber numberWithInt:6]
                           sendMax:NO
                        completion:^(ZKComposedTransaction * _Nullable composedTransaction, NSError * _Nullable error) {
        
        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }
        
        NSLog(@"Tx Fee: %@", composedTransaction.fee);
        
        if (!submit) {
            return;
        }
        
        [_wallet submitTransaction:composedTransaction
                          metadata:nil
                        completion:^(ZKTransaction * _Nullable transaction, NSError * _Nullable error) {
            
            if (error != nil) {
                NSLog(@"error: %@", [error description]);
                return;
            }
            
            NSLog(@"Tx Hash: %@", transaction.cryptoProperties.txHash);
        }];
    }];
}

- (void)composeBtcTransaction:(ZKAccount *)account
                       submit:(BOOL)submit {
    [_wallet composeTransaction:account.id
                changeAccountId:account.id
                    destination:@"2N6BfH356AicEzuC1dYt4gYkw6WFWZrfeSY"
                         amount:[NSDecimalNumber decimalNumberWithString:@"0.01"]
                        feeRate:[NSDecimalNumber decimalNumberWithString:@"20"]
                        sendMax:NO
                     completion:^(ZKComposedTransaction * _Nullable composedTransaction, NSError * _Nullable error) {
        
        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }
        

        NSLog(@"Tx Fee: %@", composedTransaction.fee);
        
        if (!submit) {
            return;
        }
        
        [_wallet submitTransaction:composedTransaction
                          metadata:nil
                        completion:^(ZKTransaction * _Nullable transaction, NSError * _Nullable error) {
            
            if (error != nil) {
                NSLog(@"error: %@", [error description]);
                return;
            }
            
            NSLog(@"Tx Hash: %@", transaction.cryptoProperties.txHash);
        }];
    }];
}


- (void)composeExchange:(ZKAccount *)fromAccount
              toAccount:(ZKAccount *)toAccount
           exchangeRate:(ZKExchangeRate *)exchangeRate
        exchangeSetting:(ZKExchangeSetting *)exchangeSetting
                 amount:(NSDecimalNumber *)amount
                 submit:(BOOL)submit
{
    [_wallet composeExchange:fromAccount.id
                 toAccountId:toAccount.id
                exchangeRate:exchangeRate
             exchangeSetting:exchangeSetting
                      amount:amount
                     sendMax:NO
                  completion:^(ZKComposedExchange * _Nullable composedExchange, NSError * _Nullable error) {
        
        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }
        
        NSLog(@"Return Amount: %@", composedExchange.returnAmount);
        NSLog(@"Exchange Fee: %@", composedExchange.exchangeFee);
        
        if (!submit) {
            return;
        }
        
        [_wallet submitExchange:composedExchange
                     completion:^(ZKExchange * _Nullable exchange, NSError * _Nullable error) {
            
            if (error != nil) {
                NSLog(@"error: %@", [error description]);
                return;
            }
            
            NSLog(@"Exchange id: %@", exchange.id);
        }];
    }];
}

@end
