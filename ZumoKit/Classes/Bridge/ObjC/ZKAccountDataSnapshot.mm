// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccountDataSnapshot.h"


@implementation ZKAccountDataSnapshot

- (nonnull instancetype)initWithAccount:(nonnull ZKAccount *)account
                           transactions:(nonnull NSArray<ZKTransaction *> *)transactions
{
    if (self = [super init]) {
        _account = account;
        _transactions = [transactions copy];
    }
    return self;
}

+ (nonnull instancetype)accountDataSnapshotWithAccount:(nonnull ZKAccount *)account
                                          transactions:(nonnull NSArray<ZKTransaction *> *)transactions
{
    return [(ZKAccountDataSnapshot*)[self alloc] initWithAccount:account
                                                    transactions:transactions];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKAccountDataSnapshot class]]) {
        return NO;
    }
    ZKAccountDataSnapshot *typedOther = (ZKAccountDataSnapshot *)other;
    return [self.account isEqual:typedOther.account] &&
            [self.transactions isEqualToArray:typedOther.transactions];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.account.hash ^
            self.transactions.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p account:%@ transactions:%@>", self.class, (void *)self, self.account, self.transactions];
}

@end
