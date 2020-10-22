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

- (void)initialize {
    NSLog(@"ZumoKit SDK version: %@", [ZumoKit version]);

    NSBundle* mainBundle = [NSBundle mainBundle];

    // ZumoKit config
    NSString *apiKey = [mainBundle objectForInfoDictionaryKey:@"API_KEY"];
    NSString *apiUrl = [mainBundle objectForInfoDictionaryKey:@"API_URL"];
    NSString *txServiceUrl = [mainBundle objectForInfoDictionaryKey:@"TX_SERVICE_URL"];

    // Client config
    NSURL *clientZumoKitAuthEndpoint = [NSURL URLWithString:[mainBundle objectForInfoDictionaryKey:@"CLIENT_ZUMOKIT_AUTH_ENDPOINT"]];
    NSError *e = nil;
    NSDictionary *clientHeaders = [NSJSONSerialization JSONObjectWithData:[[mainBundle objectForInfoDictionaryKey:@"CLIENT_HEADERS"] dataUsingEncoding:NSUTF8StringEncoding] options: NSJSONReadingMutableContainers error: &e];
    NSString *userWalletPassword = [mainBundle objectForInfoDictionaryKey:@"USER_WALLET_PASSWORD"];;

    // Initialize ZumoKit
    _zumoKit =  [[ZumoKit alloc] initWithApiKey:apiKey
                                         apiUrl:apiUrl
                                   txServiceUrl:txServiceUrl];

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
        [_zumoKit
            authUser:userTokenSet
            completion: ^(ZKUser * _Nullable user, NSError * _Nullable error) {

               _user = user;

               if (error != nil) {
                   NSLog(@"Auth error: %@", [error userInfo]);
                   return;
               }

               if ([_user hasWallet]) {
                   ZKAccount *ethAccount = [_user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
                   NSLog(@"ETH account: %@", ethAccount.cryptoProperties.address);

                   ZKAccount *btcAccount = [_user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
                   NSLog(@"BTC account: %@", btcAccount.cryptoProperties.address);

                   ZKAccount *fiatAccount = [_user getAccount:@"GBP" network:ZKNetworkTypeTESTNET type:ZKAccountTypeSTANDARD];
                   NSLog(@"Fiat account ballance: %@", fiatAccount.balance.description);

                   [_user unlockWallet:userWalletPassword completion:^(ZKWallet * _Nullable wallet, NSError * _Nullable error) {
                           if (error != nil) {
                               NSLog(@"error: %@", [error description]);
                               return;
                           }

                           _wallet = wallet;

                             //[self composeEthTransaction:ethAccount submit:NO];
                             //[self composeBtcTransaction:btcAccount];

                             //ZKExchangeRate *ethBtcExchangeRate = [_zumoKit getState].exchangeRates[@"ETH"][@"BTC"];
                             //ZKExchangeRate *btcEthExchangeRate = [_zumoKit getState].exchangeRates[@"BTC"][@"ETH"];

                             //[self composeExchange:ethAccount
                             //      widhdrawAccount:btcAccount
                             //         exchangeRate:[_zumoKit getState].exchangeRates[@"ETH"][@"BTC"]
                             //     exchangeSettings:[_zumoKit getState].exchangeSettings[@"ETH"][@"BTC"]
                             //                value:@"0.02"];
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

- (void)composeEthTransaction:(ZKAccount *) account
                       submit:(BOOL) submit {
    [_wallet composeEthTransaction:account.id
                          gasPrice:[NSDecimalNumber decimalNumberWithString:@"60"]
                          gasLimit:[NSDecimalNumber decimalNumberWithString:@"21000"]
                       destination:@"0xD797c81C928a7F4CF7dEB960B5963697fAcFE0eE"
                            amount:nil
                              data:nil
                             nonce:[NSNumber numberWithInt:6]
                           sendMax:YES
                        completion:^(ZKComposedTransaction * _Nullable composedTransaction, NSError * _Nullable error) {

        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }

        NSLog(@"Account Balance: %@", composedTransaction.account.balance);
        NSLog(@"Tx Value: %@", composedTransaction.amount);
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

            NSLog(@"Tx Hash: %@", transaction.cryptoProperties.txHash);
        }];
    }];
}

- (void)composeBtcTransaction:(ZKAccount *) account {
    [_wallet composeTransaction:account.id
                changeAccountId:account.id
                    destination:@"2N6BfH356AicEzuC1dYt4gYkw6WFWZrfeSY"
                         amount:nil
                        feeRate:[NSDecimalNumber decimalNumberWithString:@"20"]
                        sendMax:YES
                     completion:^(ZKComposedTransaction * _Nullable transaction, NSError * _Nullable error) {

        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }

        NSLog(@"Account Balance: %@", transaction.account.balance);
        NSLog(@"Tx Value: %@", transaction.amount);
        NSLog(@"Tx Fee: %@", transaction.fee);
    }];
}


- (void)composeExchange:(ZKAccount *)fromAccount
              toAccount:(ZKAccount *)toAccount
           exchangeRate:(ZKExchangeRate *)exchangeRate
       exchangeSettings:(ZKExchangeSettings *)exchangeSettings
                 amount:(NSDecimalNumber *)amount
{
    [_wallet composeExchange:fromAccount.id
                 toAccountId:toAccount.id
                exchangeRate:exchangeRate
            exchangeSettings:exchangeSettings
                      amount:nil
                     sendMax:YES
                  completion:^(ZKComposedExchange * _Nullable exchange, NSError * _Nullable error) {

        if (error != nil) {
            NSLog(@"error: %@", [error description]);
            return;
        }

        NSLog(@"Return Amount: %@", exchange.returnAmount);
        NSLog(@"Exchange Fee: %@", exchange.exchangeFee);
    }];
}

@end
