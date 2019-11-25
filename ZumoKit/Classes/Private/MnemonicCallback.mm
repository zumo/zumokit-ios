//
//  iOSMnemonicCallback.m
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 09/10/2019.
//

#import <Foundation/Foundation.h>

#import "MnemonicCallback.h"

@interface MnemonicCallback ()

@property (nonatomic, copy) MnemonicCompletionBlock completionHandler;

@end

@implementation MnemonicCallback

- (instancetype) initWithCompletionHandler:(MnemonicCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSString *)errorName errorMessage:(nonnull NSString *)errorMessage {
    _completionHandler(NO, errorName, errorMessage, NULL);
}

- (void)onSuccess:(NSString *) mnemonic {
    _completionHandler(YES, NULL, NULL, mnemonic);
}

@end
