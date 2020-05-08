//
//  SubmitExchangeCallback.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 08/05/2020.
//

#import "SubmitExchangeCallback.h"

@interface SubmitExchangeCallback ()

@property (nonatomic, copy) SubmitExchangeCompletionBlock completionHandler;

@end

@implementation SubmitExchangeCallback

- (instancetype) initWithCompletionHandler:(SubmitExchangeCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKExchange *) exchange {
    _completionHandler(exchange, nil);
}

@end

