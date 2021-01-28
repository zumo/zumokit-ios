#import "CardCallback.h"

@interface CardCallback ()

@property (nonatomic, copy) CardCompletionBlock completionHandler;

@end

@implementation CardCallback

- (instancetype) initWithCompletionHandler:(CardCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKCard *) card {
    _completionHandler(card, nil);
}

@end
