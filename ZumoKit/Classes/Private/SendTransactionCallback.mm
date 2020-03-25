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

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKTransaction *) transaction {
    _completionHandler(transaction, nil);
}

@end
