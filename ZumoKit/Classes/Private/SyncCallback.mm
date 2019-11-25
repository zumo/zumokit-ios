//
//  iOSSyncCallback.m
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 28/08/2019.
//

#import <Foundation/Foundation.h>

#import "SyncCallback.h"

@interface SyncCallback ()

@property (nonatomic, copy) SyncCompletionBlock completionHandler;

@end

@implementation SyncCallback

- (instancetype) initWithCompletionHandler:(SyncCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(int16_t)errorCode errorMessage:(nonnull NSString *)errorMessage {
    _completionHandler(NO, errorCode, errorMessage);
}

- (void)onSuccess {
    _completionHandler(YES, 0, NULL);
}

@end
