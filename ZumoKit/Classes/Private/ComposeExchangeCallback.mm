//
//  ComposeExchangeCallback.mm
//  Pods-ZumoKit_Example
//
//  Created by Ivan Romanovski on 22/04/2020.
//

#import "ComposeExchangeCallback.h"

@interface ComposeExchangeCallback ()

@property (nonatomic, copy) ComposeExchangeCompletionBlock completionHandler;

@end

@implementation ComposeExchangeCallback

- (instancetype) initWithCompletionHandler:(ComposeExchangeCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKComposedExchange *) composedExchange {
    _completionHandler(composedExchange, nil);
}

@end
