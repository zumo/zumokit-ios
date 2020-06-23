// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKTransaction.h"


@implementation ZKTransaction

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                              type:(nonnull NSString *)type
                         accountId:(nonnull NSString *)accountId
                      currencyCode:(nonnull NSString *)currencyCode
                        fromUserId:(nullable NSString *)fromUserId
                          toUserId:(nullable NSString *)toUserId
                           network:(nonnull NSString *)network
                         direction:(nonnull NSString *)direction
                            status:(nonnull NSString *)status
                            amount:(nullable NSString *)amount
                               fee:(nullable NSString *)fee
                     cryptoDetails:(nullable ZKCryptoDetails *)cryptoDetails
                       fiatDetails:(nullable NSString *)fiatDetails
                       submittedAt:(nullable NSNumber *)submittedAt
                       confirmedAt:(nullable NSNumber *)confirmedAt
                         timestamp:(int64_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _type = [type copy];
        _accountId = [accountId copy];
        _currencyCode = [currencyCode copy];
        _fromUserId = [fromUserId copy];
        _toUserId = [toUserId copy];
        _network = [network copy];
        _direction = [direction copy];
        _status = [status copy];
        _amount = [amount copy];
        _fee = [fee copy];
        _cryptoDetails = cryptoDetails;
        _fiatDetails = [fiatDetails copy];
        _submittedAt = submittedAt;
        _confirmedAt = confirmedAt;
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)transactionWithId:(nonnull NSString *)id
                                     type:(nonnull NSString *)type
                                accountId:(nonnull NSString *)accountId
                             currencyCode:(nonnull NSString *)currencyCode
                               fromUserId:(nullable NSString *)fromUserId
                                 toUserId:(nullable NSString *)toUserId
                                  network:(nonnull NSString *)network
                                direction:(nonnull NSString *)direction
                                   status:(nonnull NSString *)status
                                   amount:(nullable NSString *)amount
                                      fee:(nullable NSString *)fee
                            cryptoDetails:(nullable ZKCryptoDetails *)cryptoDetails
                              fiatDetails:(nullable NSString *)fiatDetails
                              submittedAt:(nullable NSNumber *)submittedAt
                              confirmedAt:(nullable NSNumber *)confirmedAt
                                timestamp:(int64_t)timestamp
{
    return [(ZKTransaction*)[self alloc] initWithId:id
                                               type:type
                                          accountId:accountId
                                       currencyCode:currencyCode
                                         fromUserId:fromUserId
                                           toUserId:toUserId
                                            network:network
                                          direction:direction
                                             status:status
                                             amount:amount
                                                fee:fee
                                      cryptoDetails:cryptoDetails
                                        fiatDetails:fiatDetails
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
            [self.accountId isEqualToString:typedOther.accountId] &&
            [self.currencyCode isEqualToString:typedOther.currencyCode] &&
            ((self.fromUserId == nil && typedOther.fromUserId == nil) || (self.fromUserId != nil && [self.fromUserId isEqual:typedOther.fromUserId])) &&
            ((self.toUserId == nil && typedOther.toUserId == nil) || (self.toUserId != nil && [self.toUserId isEqual:typedOther.toUserId])) &&
            [self.network isEqualToString:typedOther.network] &&
            [self.direction isEqualToString:typedOther.direction] &&
            [self.status isEqualToString:typedOther.status] &&
            ((self.amount == nil && typedOther.amount == nil) || (self.amount != nil && [self.amount isEqual:typedOther.amount])) &&
            ((self.fee == nil && typedOther.fee == nil) || (self.fee != nil && [self.fee isEqual:typedOther.fee])) &&
            ((self.cryptoDetails == nil && typedOther.cryptoDetails == nil) || (self.cryptoDetails != nil && [self.cryptoDetails isEqual:typedOther.cryptoDetails])) &&
            ((self.fiatDetails == nil && typedOther.fiatDetails == nil) || (self.fiatDetails != nil && [self.fiatDetails isEqual:typedOther.fiatDetails])) &&
            ((self.submittedAt == nil && typedOther.submittedAt == nil) || (self.submittedAt != nil && [self.submittedAt isEqual:typedOther.submittedAt])) &&
            ((self.confirmedAt == nil && typedOther.confirmedAt == nil) || (self.confirmedAt != nil && [self.confirmedAt isEqual:typedOther.confirmedAt])) &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            self.type.hash ^
            self.accountId.hash ^
            self.currencyCode.hash ^
            self.fromUserId.hash ^
            self.toUserId.hash ^
            self.network.hash ^
            self.direction.hash ^
            self.status.hash ^
            self.amount.hash ^
            self.fee.hash ^
            self.cryptoDetails.hash ^
            self.fiatDetails.hash ^
            self.submittedAt.hash ^
            self.confirmedAt.hash ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ type:%@ accountId:%@ currencyCode:%@ fromUserId:%@ toUserId:%@ network:%@ direction:%@ status:%@ amount:%@ fee:%@ cryptoDetails:%@ fiatDetails:%@ submittedAt:%@ confirmedAt:%@ timestamp:%@>", self.class, (void *)self, self.id, self.type, self.accountId, self.currencyCode, self.fromUserId, self.toUserId, self.network, self.direction, self.status, self.amount, self.fee, self.cryptoDetails, self.fiatDetails, self.submittedAt, self.confirmedAt, @(self.timestamp)];
}

@end
