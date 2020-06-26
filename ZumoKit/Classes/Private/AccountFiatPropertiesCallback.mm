#import "AccountFiatPropertiesCallback.h"

@interface AccountFiatPropertiesCallback ()

@property (nonatomic, copy) AccountFiatPropertiesCompletionBlock completionHandler;

@end

@implementation AccountFiatPropertiesCallback

- (instancetype) initWithCompletionHandler:(AccountFiatPropertiesCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKAccountFiatProperties *) accountFiatProperties {
    _completionHandler(accountFiatProperties, nil);
}

@end
