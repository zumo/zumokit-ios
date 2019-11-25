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
    for (id object in state.transactions) {
        ZKTransaction *tx= object;
        NSLog(@"Transaction: %@", tx.id);
        NSLog(@"Transaction pound value: %@", tx.fiatValue[@"GBP"]);
    }
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
     completion: ^(bool success, short errorCode, NSString * _Nullable errorMessage, ZKUser * _Nullable user) {
        if(success) {
            if ([user hasWallet]) {
                NSPredicate *predicate = [NSPredicate predicateWithFormat:@"coin == %@", @"Ether"];
                NSArray *filteredArray = [[user getAccounts] filteredArrayUsingPredicate:predicate];
                ZKAccount *account = filteredArray.firstObject;
                NSLog(@"ETH account: %@", account.address);
                
                [user unlockWallet:userPassword completion:^(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, ZKWallet * _Nullable wallet) {
                       NSLog(@"SUCCESS: %@", success ? @"YES" : @"NO");
                       if(success) {
                           //[self sendEthTransaction:account wallet:wallet];
                       } else {
                           NSLog(@"errorName: %@", errorName);
                           NSLog(@"errorMessage: %@", errorMessage);
                       }
                   }];
            } else {
            NSString *mnemonicPhrase = @"hundred forget actual dose champion earth maximum ordinary breeze moral head mixture";

            [user createWallet: mnemonicPhrase password:userPassword completion:^(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, ZKWallet * _Nullable wallet) {
                    NSLog(@"SUCCESS: %@", success ? @"YES" : @"NO");
                    if(success) {
                        NSPredicate *predicate = [NSPredicate predicateWithFormat:@"coin == %@", @"Ether"];
                        NSArray *filteredArray = [[user getAccounts] filteredArrayUsingPredicate:predicate];
                        ZKAccount *account = filteredArray.firstObject;
                        NSLog(@"ETH account: %@", account.address);
                        
                        //[self sendEthTransaction:account wallet:wallet];
                    } else {
                        NSLog(@"errorName: %@", errorName);
                        NSLog(@"errorMessage: %@", errorMessage);
                    }
                }];
            }
        } else {
            NSLog(@"Auth error: %@", errorMessage);
        }
    }];
}

- (void)sendEthTransaction:(ZKAccount *) account
                    wallet:(ZKWallet *) wallet {
    [wallet sendEthTransaction:account.id gasPrice:@"60" gasLimit:@"21000" to:@"0xD797c81C928a7F4CF7dEB960B5963697fAcFE0eE" value:@"0.00023" data:@"" nonce:[NSNumber numberWithInt:6] completion:^(bool success, NSString * _Nullable errorName, NSString * _Nullable errorMessage, ZKTransaction * _Nullable transaction) {
                if(success) {
                    NSLog(@"txHash: %@", transaction.txHash);
                } else {
                    NSLog(@"errorName: %@", errorName);
                    NSLog(@"errorMessage: %@", errorMessage);
                }
            }];
}

@end
