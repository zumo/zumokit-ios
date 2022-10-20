#import "StringifiedJsonCallback.h"

@interface StringifiedJsonCallback ()

@property (nonatomic, copy) StringifiedJsonCompletionBlock completionHandler;

@end

@implementation StringifiedJsonCallback

- (instancetype) initWithCompletionHandler:(StringifiedJsonCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(NSString *) stringifiedJson {
    _completionHandler(stringifiedJson, nil);
}

@end
