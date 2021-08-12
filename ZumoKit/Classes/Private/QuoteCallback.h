#import <Foundation/Foundation.h>

#import "ZKQuoteCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^QuoteCompletionBlock)(ZKQuote * _Nullable quote, NSError * _Nullable error);

@interface QuoteCallback : NSObject <ZKQuoteCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(QuoteCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
