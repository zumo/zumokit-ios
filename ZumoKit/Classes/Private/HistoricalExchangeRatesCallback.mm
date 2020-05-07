//
//  HistoricalExchangeRatesCallback.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 06/05/2020.
//

#import "HistoricalExchangeRatesCallback.h"

@interface HistoricalExchangeRatesCallback ()

@property (nonatomic, copy) HistoricalExchangeRatesCompletionBlock completionHandler;

@end

@implementation HistoricalExchangeRatesCallback

- (instancetype) initWithCompletionHandler:(HistoricalExchangeRatesCompletionBlock)completionHandler {
    self = [super init];
    
    if (self) {
        _completionHandler = completionHandler;
    }
    
    return self;
}

- (void)onError:(nonnull NSError *)error  {
    _completionHandler(nil, error);
}

- (void)onSuccess:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, NSDictionary<NSString *, NSArray<ZKExchangeRate *> *> *> *> *) historicalExchangeRates {
    _completionHandler(historicalExchangeRates, nil);
}

@end
