// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAccount.h"


@implementation ZKAccount

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                      currencyType:(nonnull NSString *)currencyType
                      currencyCode:(nonnull NSString *)currencyCode
                           network:(nonnull NSString *)network
                              type:(nonnull NSString *)type
                       custodyType:(nonnull NSString *)custodyType
                           balance:(nonnull NSDecimalNumber *)balance
                     ledgerBalance:(nonnull NSDecimalNumber *)ledgerBalance
                  availableBalance:(nonnull NSDecimalNumber *)availableBalance
                    overdraftLimit:(nonnull NSDecimalNumber *)overdraftLimit
               hasNominatedAccount:(BOOL)hasNominatedAccount
                  cryptoProperties:(nullable ZKAccountCryptoProperties *)cryptoProperties
                    fiatProperties:(nullable ZKAccountFiatProperties *)fiatProperties
                             cards:(nonnull NSArray<ZKCard *> *)cards
{
    if (self = [super init]) {
        _id = [id copy];
        _currencyType = [currencyType copy];
        _currencyCode = [currencyCode copy];
        _network = [network copy];
        _type = [type copy];
        _custodyType = [custodyType copy];
        _balance = balance;
        _ledgerBalance = ledgerBalance;
        _availableBalance = availableBalance;
        _overdraftLimit = overdraftLimit;
        _hasNominatedAccount = hasNominatedAccount;
        _cryptoProperties = cryptoProperties;
        _fiatProperties = fiatProperties;
        _cards = [cards copy];
    }
    return self;
}

+ (nonnull instancetype)accountWithId:(nonnull NSString *)id
                         currencyType:(nonnull NSString *)currencyType
                         currencyCode:(nonnull NSString *)currencyCode
                              network:(nonnull NSString *)network
                                 type:(nonnull NSString *)type
                          custodyType:(nonnull NSString *)custodyType
                              balance:(nonnull NSDecimalNumber *)balance
                        ledgerBalance:(nonnull NSDecimalNumber *)ledgerBalance
                     availableBalance:(nonnull NSDecimalNumber *)availableBalance
                       overdraftLimit:(nonnull NSDecimalNumber *)overdraftLimit
                  hasNominatedAccount:(BOOL)hasNominatedAccount
                     cryptoProperties:(nullable ZKAccountCryptoProperties *)cryptoProperties
                       fiatProperties:(nullable ZKAccountFiatProperties *)fiatProperties
                                cards:(nonnull NSArray<ZKCard *> *)cards
{
    return [(ZKAccount*)[self alloc] initWithId:id
                                   currencyType:currencyType
                                   currencyCode:currencyCode
                                        network:network
                                           type:type
                                    custodyType:custodyType
                                        balance:balance
                                  ledgerBalance:ledgerBalance
                               availableBalance:availableBalance
                                 overdraftLimit:overdraftLimit
                            hasNominatedAccount:hasNominatedAccount
                               cryptoProperties:cryptoProperties
                                 fiatProperties:fiatProperties
                                          cards:cards];
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
            [self.custodyType isEqualToString:typedOther.custodyType] &&
            [self.balance isEqual:typedOther.balance] &&
            [self.ledgerBalance isEqual:typedOther.ledgerBalance] &&
            [self.availableBalance isEqual:typedOther.availableBalance] &&
            [self.overdraftLimit isEqual:typedOther.overdraftLimit] &&
            self.hasNominatedAccount == typedOther.hasNominatedAccount &&
            ((self.cryptoProperties == nil && typedOther.cryptoProperties == nil) || (self.cryptoProperties != nil && [self.cryptoProperties isEqual:typedOther.cryptoProperties])) &&
            ((self.fiatProperties == nil && typedOther.fiatProperties == nil) || (self.fiatProperties != nil && [self.fiatProperties isEqual:typedOther.fiatProperties])) &&
            [self.cards isEqualToArray:typedOther.cards];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.currencyType.hash ^
            self.currencyCode.hash ^
            self.network.hash ^
            self.type.hash ^
            self.custodyType.hash ^
            ((NSUInteger)self.balance) ^
            ((NSUInteger)self.ledgerBalance) ^
            ((NSUInteger)self.availableBalance) ^
            ((NSUInteger)self.overdraftLimit) ^
            (NSUInteger)self.hasNominatedAccount ^
            self.cryptoProperties.hash ^
            self.fiatProperties.hash ^
            self.cards.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ currencyType:%@ currencyCode:%@ network:%@ type:%@ custodyType:%@ balance:%@ ledgerBalance:%@ availableBalance:%@ overdraftLimit:%@ hasNominatedAccount:%@ cryptoProperties:%@ fiatProperties:%@ cards:%@>", self.class, (void *)self, self.id, self.currencyType, self.currencyCode, self.network, self.type, self.custodyType, self.balance, self.ledgerBalance, self.availableBalance, self.overdraftLimit, @(self.hasNominatedAccount), self.cryptoProperties, self.fiatProperties, self.cards];
}

@end
