// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKTransactionFeeRate.h"


@implementation ZKTransactionFeeRate

- (nonnull instancetype)initWithSlow:(nonnull NSDecimalNumber *)slow
                             average:(nonnull NSDecimalNumber *)average
                                fast:(nonnull NSDecimalNumber *)fast
                            slowTime:(float)slowTime
                         averageTime:(float)averageTime
                            fastTime:(float)fastTime
                              source:(nonnull NSString *)source
{
    if (self = [super init]) {
        _slow = slow;
        _average = average;
        _fast = fast;
        _slowTime = slowTime;
        _averageTime = averageTime;
        _fastTime = fastTime;
        _source = [source copy];
    }
    return self;
}

+ (nonnull instancetype)transactionFeeRateWithSlow:(nonnull NSDecimalNumber *)slow
                                           average:(nonnull NSDecimalNumber *)average
                                              fast:(nonnull NSDecimalNumber *)fast
                                          slowTime:(float)slowTime
                                       averageTime:(float)averageTime
                                          fastTime:(float)fastTime
                                            source:(nonnull NSString *)source
{
    return [(ZKTransactionFeeRate*)[self alloc] initWithSlow:slow
                                                     average:average
                                                        fast:fast
                                                    slowTime:slowTime
                                                 averageTime:averageTime
                                                    fastTime:fastTime
                                                      source:source];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKTransactionFeeRate class]]) {
        return NO;
    }
    ZKTransactionFeeRate *typedOther = (ZKTransactionFeeRate *)other;
    return [self.slow isEqual:typedOther.slow] &&
            [self.average isEqual:typedOther.average] &&
            [self.fast isEqual:typedOther.fast] &&
            self.slowTime == typedOther.slowTime &&
            self.averageTime == typedOther.averageTime &&
            self.fastTime == typedOther.fastTime &&
            [self.source isEqualToString:typedOther.source];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            ((NSUInteger)self.slow) ^
            ((NSUInteger)self.average) ^
            ((NSUInteger)self.fast) ^
            (NSUInteger)self.slowTime ^
            (NSUInteger)self.averageTime ^
            (NSUInteger)self.fastTime ^
            self.source.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p slow:%@ average:%@ fast:%@ slowTime:%@ averageTime:%@ fastTime:%@ source:%@>", self.class, (void *)self, self.slow, self.average, self.fast, @(self.slowTime), @(self.averageTime), @(self.fastTime), self.source];
}

@end
