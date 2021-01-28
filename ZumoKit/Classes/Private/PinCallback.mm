#import "PinCallback.h"

@interface PinCallback ()

@property (nonatomic, copy) PinCompletionBlock completionHandler;

@end

@implementation PinCallback

- (instancetype) initWithCompletionHandler:(PinCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(0, error);
}

- (void)onSuccess:(int32_t) pin {
    _completionHandler(pin, nil);
}

@end
