// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKState.h"


@implementation ZKState

- (nonnull instancetype)initWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                            transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                               exchanges:(nonnull NSArray<ZKExchange *> *)exchanges
                                   token:(nonnull NSString *)token
                            activeUserId:(nullable NSString *)activeUserId
                           exchangeRates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)exchangeRates
                        exchangeSettings:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSettings *> *> *)exchangeSettings
                     txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                              syncStatus:(ZKSyncStatus)syncStatus
                modulrCustomerOnNetworks:(nonnull NSArray<NSString *> *)modulrCustomerOnNetworks
{
    if (self = [super init]) {
        _accounts = [accounts copy];
        _transactions = [transactions copy];
        _exchanges = [exchanges copy];
        _token = [token copy];
        _activeUserId = [activeUserId copy];
        _exchangeRates = [exchangeRates copy];
        _exchangeSettings = [exchangeSettings copy];
        _txServiceConnection = txServiceConnection;
        _feeRates = [feeRates copy];
        _syncStatus = syncStatus;
        _modulrCustomerOnNetworks = [modulrCustomerOnNetworks copy];
    }
    return self;
}

+ (nonnull instancetype)stateWithAccounts:(nonnull NSArray<ZKAccount *> *)accounts
                             transactions:(nonnull NSArray<ZKTransaction *> *)transactions
                                exchanges:(nonnull NSArray<ZKExchange *> *)exchanges
                                    token:(nonnull NSString *)token
                             activeUserId:(nullable NSString *)activeUserId
                            exchangeRates:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeRate *> *> *)exchangeRates
                         exchangeSettings:(nonnull NSDictionary<NSString *, NSDictionary<NSString *, ZKExchangeSettings *> *> *)exchangeSettings
                      txServiceConnection:(nonnull ZKTxServiceConnection *)txServiceConnection
                                 feeRates:(nonnull NSDictionary<NSString *, ZKFeeRates *> *)feeRates
                               syncStatus:(ZKSyncStatus)syncStatus
                 modulrCustomerOnNetworks:(nonnull NSArray<NSString *> *)modulrCustomerOnNetworks
{
    return [(ZKState*)[self alloc] initWithAccounts:accounts
                                       transactions:transactions
                                          exchanges:exchanges
                                              token:token
                                       activeUserId:activeUserId
                                      exchangeRates:exchangeRates
                                   exchangeSettings:exchangeSettings
                                txServiceConnection:txServiceConnection
                                           feeRates:feeRates
                                         syncStatus:syncStatus
                           modulrCustomerOnNetworks:modulrCustomerOnNetworks];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKState class]]) {
        return NO;
    }
    ZKState *typedOther = (ZKState *)other;
    return [self.accounts isEqualToArray:typedOther.accounts] &&
            [self.transactions isEqualToArray:typedOther.transactions] &&
            [self.exchanges isEqualToArray:typedOther.exchanges] &&
            [self.token isEqualToString:typedOther.token] &&
            ((self.activeUserId == nil && typedOther.activeUserId == nil) || (self.activeUserId != nil && [self.activeUserId isEqual:typedOther.activeUserId])) &&
            [self.exchangeRates isEqualToDictionary:typedOther.exchangeRates] &&
            [self.exchangeSettings isEqualToDictionary:typedOther.exchangeSettings] &&
            [self.txServiceConnection isEqual:typedOther.txServiceConnection] &&
            [self.feeRates isEqualToDictionary:typedOther.feeRates] &&
            self.syncStatus == typedOther.syncStatus &&
            [self.modulrCustomerOnNetworks isEqualToArray:typedOther.modulrCustomerOnNetworks];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.accounts.hash ^
            self.transactions.hash ^
            self.exchanges.hash ^
            self.token.hash ^
            self.activeUserId.hash ^
            self.exchangeRates.hash ^
            self.exchangeSettings.hash ^
            self.txServiceConnection.hash ^
            self.feeRates.hash ^
            (NSUInteger)self.syncStatus ^
            self.modulrCustomerOnNetworks.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p accounts:%@ transactions:%@ exchanges:%@ token:%@ activeUserId:%@ exchangeRates:%@ exchangeSettings:%@ txServiceConnection:%@ feeRates:%@ syncStatus:%@ modulrCustomerOnNetworks:%@>", self.class, (void *)self, self.accounts, self.transactions, self.exchanges, self.token, self.activeUserId, self.exchangeRates, self.exchangeSettings, self.txServiceConnection, self.feeRates, @(self.syncStatus), self.modulrCustomerOnNetworks];
}

@end
