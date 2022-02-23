#import "AuthenticationConfigCallback.h"

@interface AuthenticationConfigCallback ()

@property (nonatomic, copy) AuthenticationConfigCompletionBlock completionHandler;

@end

@implementation AuthenticationConfigCallback

- (instancetype) initWithCompletionHandler:(AuthenticationConfigCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(0, error);
}

- (void)onSuccess:(nonnull ZKAuthenticationConfig *) authConfig {
    _completionHandler(authConfig, nil);
}

@end
