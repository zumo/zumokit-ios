//
//  iOSSendTransactionCallback.m
//  Pods-ZumoKit_Example
//
//  Created by Tim Šabanov on 26/04/2019.
//

#import "SendTransactionCallback.h"

@interface SendTransactionCallback ()

@property (nonatomic, copy) SendTransactionCompletionBlock completionHandler;

@end

@implementation SendTransactionCallback

- (instancetype) initWithCompletionHandler:(SendTransactionCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull ZKZumoKitError *)error  {
    _completionHandler(NO, error, NULL);
}

- (void)onSuccess:(nonnull ZKTransaction *) transaction {
    _completionHandler(YES, NULL, transaction);
}

@end
