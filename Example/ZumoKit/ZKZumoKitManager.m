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
    // for (id object in state.transactions) {
    //     ZKTransaction *tx= object;
    //     NSLog(@"Transaction: %@", tx.id);
    //     NSLog(@"Transaction pound value: %@", tx.fiatValue[@"GBP"]);
    // }
}

- (void)initialize {
    NSLog(@"ZumoKit SDK version: %@", [ZumoKit version]);
    
    NSBundle* mainBundle = [NSBundle mainBundle];
    
    // ZumoKit config
    NSString *txServiceUrl = [mainBundle objectForInfoDictionaryKey:@"TX_SERVICE_URL"];
    NSString *apiKey = [mainBundle objectForInfoDictionaryKey:@"API_KEY"];
    NSString *apiRoot = [mainBundle objectForInfoDictionaryKey:@"API_URL"];
    NSString *myRoot = [mainBundle objectForInfoDictionaryKey:@"BUNDLE_URL"];
    NSString *userToken = [mainBundle objectForInfoDictionaryKey:@"USER_TOKEN"];;
    NSString *userPassword = [mainBundle objectForInfoDictionaryKey:@"USER_PASSWORD"];;
    NSError *e = nil;
    NSDictionary *customHeaders = [NSJSONSerialization JSONObjectWithData:[[mainBundle objectForInfoDictionaryKey:@"CUSTOM_HEADERS"] dataUsingEncoding:NSUTF8StringEncoding] options: NSJSONReadingMutableContainers error: &e];

    _zumoKit =  [[ZumoKit alloc] initWithTxServiceUrl:txServiceUrl
                                               apiKey:apiKey
                                              apiRoot:apiRoot
                                               myRoot:myRoot
                 ];
    
    [_zumoKit addStateListener:self];

    [_zumoKit
     auth:userToken
     headers: customHeaders
     completion: ^(bool success, ZKZumoKitError * _Nullable error, ZKUser * _Nullable user) {
        
        _user = user;
        
        if(success) {
            if ([_user hasWallet]) {
                ZKAccount *ethAccount = [_user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
                NSLog(@"ETH account: %@", ethAccount.address);
                
                ZKAccount *btcAccount = [_user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
                NSLog(@"BTC account: %@", btcAccount.address);
                
                [_user unlockWallet:userPassword completion:^(bool success, ZKZumoKitError * _Nullable error, ZKWallet * _Nullable wallet) {
                       NSLog(@"SUCCESS: %@", success ? @"YES" : @"NO");
                       if(success) {
                           _wallet = wallet;
                           // [self sendEthTransaction:ethAccount];
                           // [self sendBtcTransaction:btcAccount];
                       } else {
                           NSLog(@"error: %@", [error description]);
                       }
                   }];
            } else {
                NSString *mnemonicPhrase = [[_zumoKit utils] generateMnemonic:12];
                //NSString *mnemonicPhrase = @"breeze lady dial claim eyebrow news urban warm scout barrel gorilla prevent";

                [_user createWallet: mnemonicPhrase password:userPassword completion:^(bool success, ZKZumoKitError * _Nullable error, ZKWallet * _Nullable wallet) {
                        NSLog(@"SUCCESS: %@", success ? @"YES" : @"NO");
                        if(success) {
                            ZKAccount *ethAccount = [user getAccount:@"ETH" network:ZKNetworkTypeRINKEBY type:ZKAccountTypeSTANDARD];
                            NSLog(@"ETH account: %@", ethAccount.address);
                            
                            ZKAccount *btcAccount = [user getAccount:@"BTC" network:ZKNetworkTypeTESTNET type:ZKAccountTypeCOMPATIBILITY];
                            NSLog(@"BTC account: %@", btcAccount.address);
                            
                        } else {
                            NSLog(@"error: %@", [error description]);
                        }
                    }];
            }
        } else {
            NSLog(@"Auth error: %@", [error description]);
        }
    }];
}

- (void)sendEthTransaction:(ZKAccount *) account {
    [_wallet sendEthTransaction:account.id gasPrice:@"60" gasLimit:@"21000" to:@"0xD797c81C928a7F4CF7dEB960B5963697fAcFE0eE" value:@"0.00023" data:@"" nonce:[NSNumber numberWithInt:6] completion:^(bool success, ZKZumoKitError * _Nullable error, ZKTransaction * _Nullable transaction) {
                if(success) {
                    NSLog(@"txHash: %@", transaction.txHash);
                } else {
                    NSLog(@"error: %@", [error description]);
                }
            }];
}

- (void)sendBtcTransaction:(ZKAccount *) account {
    [_wallet sendBtcTransaction:account.id changeAccountId:account.id to:@"2N6BfH356AicEzuC1dYt4gYkw6WFWZrfeSY" value:@"0.000055" feeRate:@"20" completion:^(bool success, ZKZumoKitError * _Nullable error, ZKTransaction * _Nullable transaction) {
                if(success) {
                    NSLog(@"txHash: %@", transaction.txHash);
                } else {
                    NSLog(@"error: %@", [error description]);
                }
            }];
}

@end
