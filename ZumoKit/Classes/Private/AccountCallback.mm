#import "AccountCallback.h"

@interface AccountCallback ()

@property (nonatomic, copy) AccountCompletionBlock completionHandler;

@end

@implementation AccountCallback

- (instancetype) initWithCompletionHandler:(AccountCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull ZKAccount *) account {
    _completionHandler(account, nil);
}

@end
