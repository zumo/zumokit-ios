//
//  SubmitTransactionCallback.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 23/04/2020.
//

#import "SubmitTransactionCallback.h"

@interface SubmitTransactionCallback ()

@property (nonatomic, copy) SubmitTransactionCompletionBlock completionHandler;

@end

@implementation SubmitTransactionCallback

- (instancetype) initWithCompletionHandler:(SubmitTransactionCompletionBlock)completionHandler {
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

