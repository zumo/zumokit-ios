// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKTransaction.h"


@implementation ZKTransaction

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                              type:(nonnull NSString *)type
                      currencyCode:(nonnull NSString *)currencyCode
                         direction:(nonnull NSString *)direction
                        fromUserId:(nullable NSString *)fromUserId
                          toUserId:(nullable NSString *)toUserId
                     fromAccountId:(nullable NSString *)fromAccountId
                       toAccountId:(nullable NSString *)toAccountId
                           network:(nonnull NSString *)network
                            status:(nonnull NSString *)status
                            amount:(nullable NSDecimalNumber *)amount
                               fee:(nullable NSDecimalNumber *)fee
                             nonce:(nullable NSString *)nonce
                  cryptoProperties:(nullable ZKTransactionCryptoProperties *)cryptoProperties
                    fiatProperties:(nullable ZKTransactionFiatProperties *)fiatProperties
                          exchange:(nullable ZKExchange *)exchange
                       submittedAt:(nullable NSNumber *)submittedAt
                       confirmedAt:(nullable NSNumber *)confirmedAt
                         timestamp:(int32_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _type = [type copy];
        _currencyCode = [currencyCode copy];
        _direction = [direction copy];
        _fromUserId = [fromUserId copy];
        _toUserId = [toUserId copy];
        _fromAccountId = [fromAccountId copy];
        _toAccountId = [toAccountId copy];
        _network = [network copy];
        _status = [status copy];
        _amount = amount;
        _fee = fee;
        _nonce = [nonce copy];
        _cryptoProperties = cryptoProperties;
        _fiatProperties = fiatProperties;
        _exchange = exchange;
        _submittedAt = submittedAt;
        _confirmedAt = confirmedAt;
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)transactionWithId:(nonnull NSString *)id
                                     type:(nonnull NSString *)type
                             currencyCode:(nonnull NSString *)currencyCode
                                direction:(nonnull NSString *)direction
                               fromUserId:(nullable NSString *)fromUserId
                                 toUserId:(nullable NSString *)toUserId
                            fromAccountId:(nullable NSString *)fromAccountId
                              toAccountId:(nullable NSString *)toAccountId
                                  network:(nonnull NSString *)network
                                   status:(nonnull NSString *)status
                                   amount:(nullable NSDecimalNumber *)amount
                                      fee:(nullable NSDecimalNumber *)fee
                                    nonce:(nullable NSString *)nonce
                         cryptoProperties:(nullable ZKTransactionCryptoProperties *)cryptoProperties
                           fiatProperties:(nullable ZKTransactionFiatProperties *)fiatProperties
                                 exchange:(nullable ZKExchange *)exchange
                              submittedAt:(nullable NSNumber *)submittedAt
                              confirmedAt:(nullable NSNumber *)confirmedAt
                                timestamp:(int32_t)timestamp
{
    return [(ZKTransaction*)[self alloc] initWithId:id
                                               type:type
                                       currencyCode:currencyCode
                                          direction:direction
                                         fromUserId:fromUserId
                                           toUserId:toUserId
                                      fromAccountId:fromAccountId
                                        toAccountId:toAccountId
                                            network:network
                                             status:status
                                             amount:amount
                                                fee:fee
                                              nonce:nonce
                                   cryptoProperties:cryptoProperties
                                     fiatProperties:fiatProperties
                                           exchange:exchange
                                        submittedAt:submittedAt
                                        confirmedAt:confirmedAt
                                          timestamp:timestamp];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKTransaction class]]) {
        return NO;
    }
    ZKTransaction *typedOther = (ZKTransaction *)other;
    return [self.id isEqualToString:typedOther.id] &&
            [self.type isEqualToString:typedOther.type] &&
            [self.currencyCode isEqualToString:typedOther.currencyCode] &&
            [self.direction isEqualToString:typedOther.direction] &&
            ((self.fromUserId == nil && typedOther.fromUserId == nil) || (self.fromUserId != nil && [self.fromUserId isEqual:typedOther.fromUserId])) &&
            ((self.toUserId == nil && typedOther.toUserId == nil) || (self.toUserId != nil && [self.toUserId isEqual:typedOther.toUserId])) &&
            ((self.fromAccountId == nil && typedOther.fromAccountId == nil) || (self.fromAccountId != nil && [self.fromAccountId isEqual:typedOther.fromAccountId])) &&
            ((self.toAccountId == nil && typedOther.toAccountId == nil) || (self.toAccountId != nil && [self.toAccountId isEqual:typedOther.toAccountId])) &&
            [self.network isEqualToString:typedOther.network] &&
            [self.status isEqualToString:typedOther.status] &&
            ((self.amount == nil && typedOther.amount == nil) || (self.amount != nil && [self.amount isEqual:typedOther.amount])) &&
            ((self.fee == nil && typedOther.fee == nil) || (self.fee != nil && [self.fee isEqual:typedOther.fee])) &&
            ((self.nonce == nil && typedOther.nonce == nil) || (self.nonce != nil && [self.nonce isEqual:typedOther.nonce])) &&
            ((self.cryptoProperties == nil && typedOther.cryptoProperties == nil) || (self.cryptoProperties != nil && [self.cryptoProperties isEqual:typedOther.cryptoProperties])) &&
            ((self.fiatProperties == nil && typedOther.fiatProperties == nil) || (self.fiatProperties != nil && [self.fiatProperties isEqual:typedOther.fiatProperties])) &&
            ((self.exchange == nil && typedOther.exchange == nil) || (self.exchange != nil && [self.exchange isEqual:typedOther.exchange])) &&
            ((self.submittedAt == nil && typedOther.submittedAt == nil) || (self.submittedAt != nil && [self.submittedAt isEqual:typedOther.submittedAt])) &&
            ((self.confirmedAt == nil && typedOther.confirmedAt == nil) || (self.confirmedAt != nil && [self.confirmedAt isEqual:typedOther.confirmedAt])) &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.type.hash ^
            self.currencyCode.hash ^
            self.direction.hash ^
            self.fromUserId.hash ^
            self.toUserId.hash ^
            self.fromAccountId.hash ^
            self.toAccountId.hash ^
            self.network.hash ^
            self.status.hash ^
            self.amount.hash ^
            self.fee.hash ^
            self.nonce.hash ^
            self.cryptoProperties.hash ^
            self.fiatProperties.hash ^
            self.exchange.hash ^
            self.submittedAt.hash ^
            self.confirmedAt.hash ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ type:%@ currencyCode:%@ direction:%@ fromUserId:%@ toUserId:%@ fromAccountId:%@ toAccountId:%@ network:%@ status:%@ amount:%@ fee:%@ nonce:%@ cryptoProperties:%@ fiatProperties:%@ exchange:%@ submittedAt:%@ confirmedAt:%@ timestamp:%@>", self.class, (void *)self, self.id, self.type, self.currencyCode, self.direction, self.fromUserId, self.toUserId, self.fromAccountId, self.toAccountId, self.network, self.status, self.amount, self.fee, self.nonce, self.cryptoProperties, self.fiatProperties, self.exchange, self.submittedAt, self.confirmedAt, @(self.timestamp)];
}

@end
