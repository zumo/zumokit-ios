// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccountFiatProperties.h"


@implementation ZKAccountFiatProperties

- (nonnull instancetype)initWithProviderId:(nullable NSString *)providerId
                             accountNumber:(nullable NSString *)accountNumber
                                  sortCode:(nullable NSString *)sortCode
                                       bic:(nullable NSString *)bic
                                      iban:(nullable NSString *)iban
                              customerName:(nullable NSString *)customerName
{
    if (self = [super init]) {
        _providerId = [providerId copy];
        _accountNumber = [accountNumber copy];
        _sortCode = [sortCode copy];
        _bic = [bic copy];
        _iban = [iban copy];
        _customerName = [customerName copy];
    }
    return self;
}

+ (nonnull instancetype)accountFiatPropertiesWithProviderId:(nullable NSString *)providerId
                                              accountNumber:(nullable NSString *)accountNumber
                                                   sortCode:(nullable NSString *)sortCode
                                                        bic:(nullable NSString *)bic
                                                       iban:(nullable NSString *)iban
                                               customerName:(nullable NSString *)customerName
{
    return [(ZKAccountFiatProperties*)[self alloc] initWithProviderId:providerId
                                                        accountNumber:accountNumber
                                                             sortCode:sortCode
                                                                  bic:bic
                                                                 iban:iban
                                                         customerName:customerName];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKAccountFiatProperties class]]) {
        return NO;
    }
    ZKAccountFiatProperties *typedOther = (ZKAccountFiatProperties *)other;
    return ((self.providerId == nil && typedOther.providerId == nil) || (self.providerId != nil && [self.providerId isEqual:typedOther.providerId])) &&
            ((self.accountNumber == nil && typedOther.accountNumber == nil) || (self.accountNumber != nil && [self.accountNumber isEqual:typedOther.accountNumber])) &&
            ((self.sortCode == nil && typedOther.sortCode == nil) || (self.sortCode != nil && [self.sortCode isEqual:typedOther.sortCode])) &&
            ((self.bic == nil && typedOther.bic == nil) || (self.bic != nil && [self.bic isEqual:typedOther.bic])) &&
            ((self.iban == nil && typedOther.iban == nil) || (self.iban != nil && [self.iban isEqual:typedOther.iban])) &&
            ((self.customerName == nil && typedOther.customerName == nil) || (self.customerName != nil && [self.customerName isEqual:typedOther.customerName]));
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.providerId.hash ^
            self.accountNumber.hash ^
            self.sortCode.hash ^
            self.bic.hash ^
            self.iban.hash ^
            self.customerName.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p providerId:%@ accountNumber:%@ sortCode:%@ bic:%@ iban:%@ customerName:%@>", self.class, (void *)self, self.providerId, self.accountNumber, self.sortCode, self.bic, self.iban, self.customerName];
}

@end