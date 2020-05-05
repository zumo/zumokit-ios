//
//  ZKZumoKitManager.m
//  ZumoKit_Example
//
//  Created by Stephen Radford on 25/04/2019.
//  Copyright © 2019 steve228uk. All rights reserved.
//

#import "ZKZumoKitManager.h"

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

- (void)update:(nonnull ZKState *)state {
    // Do something with state
}

- (void)initialize {
    NSLog(@"ZumoKit SDK version: %@", [ZumoKit version]);
    
    NSBundle* mainBundle = [NSBundle mainBundle];
    
    // ZumoKit config
    NSString *apiKey = [mainBundle objectForInfoDictionaryKey:@"API_KEY"];
    NSString *apiRoot = [mainBundle objectForInfoDictionaryKey:@"API_URL"];
    NSString *txServiceUrl = [mainBundle objectForInfoDictionaryKey:@"TX_SERVICE_URL"];
    NSString *userToken = [mainBundle objectForInfoDictionaryKey:@"USER_TOKEN"];;
    NSString *userPassword = [mainBundle objectForInfoDictionaryKey:@"USER_PASSWORD"];;

    _zumoKit =  [[ZumoKit alloc] initWithApiKey:apiKey
                                        apiRoot:apiRoot
                                   txServiceUrl:txServiceUrl
                 ];
    
    [_zumoKit addStateListener:self];

    [_zumoKit
     getUser:userToken
     completion: ^(ZKUser * _Nullable user, NSError * _Nullable error) {
        
        _user = user;
        
        if (error != nil) {
            NSLog(@"Auth error: %@", [error userInfo]);
            return;
        }

        if ([_user hasWallet]) {
            ZKAccount *ethAccount = [_user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
            NSLog(@"ETH account: %@", ethAccount.address);
            
            ZKAccount *btcAccount = [_user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
            NSLog(@"BTC account: %@", btcAccount.address);
            
            [_user unlockWallet:userPassword completion:^(ZKWallet * _Nullable wallet, NSError * _Nullable error) {
                    if (error != nil) {
                        NSLog(@"error: %@", [error description]);
                        return;
                    }
                    
                    _wallet = wallet;
                    
                    [self composeEthTransaction:ethAccount submit:YES];
//                    [self composeBtcTransaction:btcAccount];
//
//                    ZKExchangeRate *ethBtcExchangeRate = [_zumoKit getState].exchangeRates[@"ETH"][@"BTC"];
//                    ZKExchangeRate *btcEthExchangeRate = [_zumoKit getState].exchangeRates[@"BTC"][@"ETH"];
//
//                    [self composeExchange:ethAccount widhdrawAccount:btcAccount exchangeRate:ethBtcExchangeRate value:@"0.2"];
//                    [self composeExchange:btcAccount widhdrawAccount:ethAccount exchangeRate:btcEthExchangeRate value:@"0.02"];
               }];
        } else {
            NSString *mnemonicPhrase = [[_zumoKit utils] generateMnemonic:12];
            //NSString *mnemonicPhrase = @"breeze lady dial claim eyebrow news urban warm scout barrel gorilla prevent";

            [_user createWallet: mnemonicPhrase password:userPassword completion:^(ZKWallet * _Nullable wallet, NSError * _Nullable error) {
                    if (error != nil) {
                        NSLog(@"error: %@", [error description]);
                        return;
                    }
                    
                    ZKAccount *ethAccount = [user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
                    NSLog(@"ETH account: %@", ethAccount.address);
                    
                    ZKAccount *btcAccount = [user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
                    NSLog(@"BTC account: %@", btcAccount.address);
                    
                }];
        }
    }];
}

- (void)composeEthTransaction:(ZKAccount *) account
                       submit:(BOOL) submit {
    [_wallet composeEthTransaction:account.id
                          gasPrice:@"60"
                          gasLimit:@"21000"
                                to:@"0xD797c81C928a7F4CF7dEB960B5963697fAcFE0eE"
                             value:@"0.00023"
                              data:@""
                             nonce:[NSNumber numberWithInt:6]
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
                            completion:^(ZKTransaction * _Nullable transaction, NSError * _Nullable error) {
            
            if (error != nil) {
                NSLog(@"error: %@", [error description]);
                return;
            }
            
            NSLog(@"Tx Hash: %@", transaction.txHash);
        }];
    }];
}

- (void)composeBtcTransaction:(ZKAccount *) account {
    [_wallet composeBtcTransaction:account.id
                   changeAccountId:account.id
                                to:@"2N6BfH356AicEzuC1dYt4gYkw6WFWZrfeSY"
                             value:@"0.000055"
                           feeRate:@"20"
                        completion:^(ZKComposedTransaction * _Nullable transaction, NSError * _Nullable error) {
        
        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }
        
        NSLog(@"Tx Fee: %@", transaction.fee);
    }];
}


- (void)composeExchange:(ZKAccount *)depositAccount
        widhdrawAccount:(ZKAccount *)withdrawAccount
           exchangeRate:(ZKExchangeRate *)exchangeRate
           exchangeFees:(ZKExchangeFees *)exchangeFees
                  value:(NSString *)value
{
    [_wallet composeExchange:depositAccount.id
           withdrawAccountId:withdrawAccount.id
                exchangeRate:exchangeRate
                exchangeFees:exchangeFees
                       value:value
                  completion:^(ZKComposedExchange * _Nullable exchange, NSError * _Nullable error) {

        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }
        
        NSLog(@"Return Value: %@", exchange.returnValue);
        NSLog(@"Exchange Fee: %@", exchange.exchangeFee);
    }];
}

@end
