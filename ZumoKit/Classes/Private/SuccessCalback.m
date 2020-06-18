#import "SuccessCallback.h"

@interface SuccessCallback ()

@property (nonatomic, copy) SuccessCompletionBlock completionHandler;

@end

@implementation SuccessCallback

- (instancetype) initWithCompletionHandler:(SuccessCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(error);
}

- (void)onSuccess {
    _completionHandler(nil);
}

@end
