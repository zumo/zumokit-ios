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

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(NSString *) mnemonic {
    _completionHandler(mnemonic, nil);
}

@end
