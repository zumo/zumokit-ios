//
//  iOSCreateWalletCallback.m
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 17/06/2019.
//

#import "WalletCallback.h"

@interface WalletCallback ()

@property (nonatomic, copy) WalletCompletionBlock completionHandler;

@end

@implementation WalletCallback

- (instancetype) initWithCompletionHandler:(WalletCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSString *)errorName errorMessage:(nonnull NSString *)errorMessage {
    _completionHandler(NO, errorName, errorMessage, NULL);
}

- (void)onSuccess:(nullable ZKWallet *) wallet {
    _completionHandler(YES, NULL, NULL, wallet);
}

@end
