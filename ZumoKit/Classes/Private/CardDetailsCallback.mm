#import "CardDetailsCallback.h"

@interface CardDetailsCallback ()

@property (nonatomic, copy) CardDetailsCompletionBlock completionHandler;

@end

@implementation CardDetailsCallback

- (instancetype) initWithCompletionHandler:(CardDetailsCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKCardDetails *) cardDetails {
    _completionHandler(cardDetails, nil);
}

@end
