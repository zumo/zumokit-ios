//
//  iOSSendTransactionCallback.m
//  Pods-ZumoKit_Example
//
//  Created by Tim Šabanov on 26/04/2019.
//

#import "ComposeTransactionCallback.h"

@interface ComposeTransactionCallback ()

@property (nonatomic, copy) ComposeTransactionCompletionBlock completionHandler;

@end

@implementation ComposeTransactionCallback

- (instancetype) initWithCompletionHandler:(ComposeTransactionCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKComposedTransaction *) composedTransaction {
    _completionHandler(composedTransaction, nil);
}

@end
