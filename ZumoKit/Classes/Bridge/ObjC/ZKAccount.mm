// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKAccount.h"


@implementation ZKAccount

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                      currencyType:(nonnull NSString *)currencyType
                      currencyCode:(nonnull NSString *)currencyCode
                           network:(nonnull NSString *)network
                              type:(nonnull NSString *)type
                           balance:(nonnull NSString *)balance
                  cryptoProperties:(nullable ZKCryptoProperties *)cryptoProperties
                    fiatProperties:(nullable ZKFiatProperties *)fiatProperties
{
    if (self = [super init]) {
        _id = [id copy];
        _currencyType = [currencyType copy];
        _currencyCode = [currencyCode copy];
        _network = [network copy];
        _type = [type copy];
        _balance = [balance copy];
        _cryptoProperties = cryptoProperties;
        _fiatProperties = fiatProperties;
    }
    return self;
}

+ (nonnull instancetype)accountWithId:(nonnull NSString *)id
                         currencyType:(nonnull NSString *)currencyType
                         currencyCode:(nonnull NSString *)currencyCode
                              network:(nonnull NSString *)network
                                 type:(nonnull NSString *)type
                              balance:(nonnull NSString *)balance
                     cryptoProperties:(nullable ZKCryptoProperties *)cryptoProperties
                       fiatProperties:(nullable ZKFiatProperties *)fiatProperties
{
    return [(ZKAccount*)[self alloc] initWithId:id
                                   currencyType:currencyType
                                   currencyCode:currencyCode
                                        network:network
                                           type:type
                                        balance:balance
                               cryptoProperties:cryptoProperties
                                 fiatProperties:fiatProperties];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKAccount class]]) {
        return NO;
    }
    ZKAccount *typedOther = (ZKAccount *)other;
    return [self.id isEqualToString:typedOther.id] &&
            [self.currencyType isEqualToString:typedOther.currencyType] &&
            [self.currencyCode isEqualToString:typedOther.currencyCode] &&
            [self.network isEqualToString:typedOther.network] &&
            [self.type isEqualToString:typedOther.type] &&
            [self.balance isEqualToString:typedOther.balance] &&
            ((self.cryptoProperties == nil && typedOther.cryptoProperties == nil) || (self.cryptoProperties != nil && [self.cryptoProperties isEqual:typedOther.cryptoProperties])) &&
            ((self.fiatProperties == nil && typedOther.fiatProperties == nil) || (self.fiatProperties != nil && [self.fiatProperties isEqual:typedOther.fiatProperties]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.currencyType.hash ^
            self.currencyCode.hash ^
            self.network.hash ^
            self.type.hash ^
            self.balance.hash ^
            self.cryptoProperties.hash ^
            self.fiatProperties.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ currencyType:%@ currencyCode:%@ network:%@ type:%@ balance:%@ cryptoProperties:%@ fiatProperties:%@>", self.class, (void *)self, self.id, self.currencyType, self.currencyCode, self.network, self.type, self.balance, self.cryptoProperties, self.fiatProperties];
}

@end
