#import "QuoteCallback.h"

@interface QuoteCallback ()

@property (nonatomic, copy) QuoteCompletionBlock completionHandler;

@end

@implementation QuoteCallback

- (instancetype) initWithCompletionHandler:(QuoteCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKQuote *) quote {
    _completionHandler(quote, nil);
}

@end
