// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from state.djinni

#import "ZKTransaction.h"


@implementation ZKTransaction

- (nonnull instancetype)initWithId:(nonnull NSString *)id
                              type:(ZKTransactionType)type
                         direction:(ZKTransactionDirection)direction
                            txHash:(nullable NSString *)txHash
                         accountId:(nonnull NSString *)accountId
                            symbol:(nullable NSString *)symbol
                              coin:(nonnull NSString *)coin
                           network:(nonnull NSString *)network
                             nonce:(nullable NSNumber *)nonce
                            status:(ZKTransactionStatus)status
                       fromAddress:(nonnull NSString *)fromAddress
                        fromUserId:(nullable NSString *)fromUserId
                         toAddress:(nonnull NSString *)toAddress
                          toUserId:(nullable NSString *)toUserId
                             value:(nullable NSString *)value
                         fiatValue:(nonnull NSDictionary<NSString *, NSString *> *)fiatValue
                              data:(nullable NSString *)data
                          gasPrice:(nullable NSString *)gasPrice
                          gasLimit:(nullable NSString *)gasLimit
                               fee:(nullable NSString *)fee
                           fiatFee:(nonnull NSDictionary<NSString *, NSString *> *)fiatFee
                       submittedAt:(nullable NSNumber *)submittedAt
                       confirmedAt:(nullable NSNumber *)confirmedAt
                         timestamp:(int64_t)timestamp
{
    if (self = [super init]) {
        _id = [id copy];
        _type = type;
        _direction = direction;
        _txHash = [txHash copy];
        _accountId = [accountId copy];
        _symbol = [symbol copy];
        _coin = [coin copy];
        _network = [network copy];
        _nonce = nonce;
        _status = status;
        _fromAddress = [fromAddress copy];
        _fromUserId = [fromUserId copy];
        _toAddress = [toAddress copy];
        _toUserId = [toUserId copy];
        _value = [value copy];
        _fiatValue = [fiatValue copy];
        _data = [data copy];
        _gasPrice = [gasPrice copy];
        _gasLimit = [gasLimit copy];
        _fee = [fee copy];
        _fiatFee = [fiatFee copy];
        _submittedAt = submittedAt;
        _confirmedAt = confirmedAt;
        _timestamp = timestamp;
    }
    return self;
}

+ (nonnull instancetype)transactionWithId:(nonnull NSString *)id
                                     type:(ZKTransactionType)type
                                direction:(ZKTransactionDirection)direction
                                   txHash:(nullable NSString *)txHash
                                accountId:(nonnull NSString *)accountId
                                   symbol:(nullable NSString *)symbol
                                     coin:(nonnull NSString *)coin
                                  network:(nonnull NSString *)network
                                    nonce:(nullable NSNumber *)nonce
                                   status:(ZKTransactionStatus)status
                              fromAddress:(nonnull NSString *)fromAddress
                               fromUserId:(nullable NSString *)fromUserId
                                toAddress:(nonnull NSString *)toAddress
                                 toUserId:(nullable NSString *)toUserId
                                    value:(nullable NSString *)value
                                fiatValue:(nonnull NSDictionary<NSString *, NSString *> *)fiatValue
                                     data:(nullable NSString *)data
                                 gasPrice:(nullable NSString *)gasPrice
                                 gasLimit:(nullable NSString *)gasLimit
                                      fee:(nullable NSString *)fee
                                  fiatFee:(nonnull NSDictionary<NSString *, NSString *> *)fiatFee
                              submittedAt:(nullable NSNumber *)submittedAt
                              confirmedAt:(nullable NSNumber *)confirmedAt
                                timestamp:(int64_t)timestamp
{
    return [(ZKTransaction*)[self alloc] initWithId:id
                                               type:type
                                          direction:direction
                                             txHash:txHash
                                          accountId:accountId
                                             symbol:symbol
                                               coin:coin
                                            network:network
                                              nonce:nonce
                                             status:status
                                        fromAddress:fromAddress
                                         fromUserId:fromUserId
                                          toAddress:toAddress
                                           toUserId:toUserId
                                              value:value
                                          fiatValue:fiatValue
                                               data:data
                                           gasPrice:gasPrice
                                           gasLimit:gasLimit
                                                fee:fee
                                            fiatFee:fiatFee
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
            self.type == typedOther.type &&
            self.direction == typedOther.direction &&
            ((self.txHash == nil && typedOther.txHash == nil) || (self.txHash != nil && [self.txHash isEqual:typedOther.txHash])) &&
            [self.accountId isEqualToString:typedOther.accountId] &&
            ((self.symbol == nil && typedOther.symbol == nil) || (self.symbol != nil && [self.symbol isEqual:typedOther.symbol])) &&
            [self.coin isEqualToString:typedOther.coin] &&
            [self.network isEqualToString:typedOther.network] &&
            ((self.nonce == nil && typedOther.nonce == nil) || (self.nonce != nil && [self.nonce isEqual:typedOther.nonce])) &&
            self.status == typedOther.status &&
            [self.fromAddress isEqualToString:typedOther.fromAddress] &&
            ((self.fromUserId == nil && typedOther.fromUserId == nil) || (self.fromUserId != nil && [self.fromUserId isEqual:typedOther.fromUserId])) &&
            [self.toAddress isEqualToString:typedOther.toAddress] &&
            ((self.toUserId == nil && typedOther.toUserId == nil) || (self.toUserId != nil && [self.toUserId isEqual:typedOther.toUserId])) &&
            ((self.value == nil && typedOther.value == nil) || (self.value != nil && [self.value isEqual:typedOther.value])) &&
            [self.fiatValue isEqualToDictionary:typedOther.fiatValue] &&
            ((self.data == nil && typedOther.data == nil) || (self.data != nil && [self.data isEqual:typedOther.data])) &&
            ((self.gasPrice == nil && typedOther.gasPrice == nil) || (self.gasPrice != nil && [self.gasPrice isEqual:typedOther.gasPrice])) &&
            ((self.gasLimit == nil && typedOther.gasLimit == nil) || (self.gasLimit != nil && [self.gasLimit isEqual:typedOther.gasLimit])) &&
            ((self.fee == nil && typedOther.fee == nil) || (self.fee != nil && [self.fee isEqual:typedOther.fee])) &&
            [self.fiatFee isEqualToDictionary:typedOther.fiatFee] &&
            ((self.submittedAt == nil && typedOther.submittedAt == nil) || (self.submittedAt != nil && [self.submittedAt isEqual:typedOther.submittedAt])) &&
            ((self.confirmedAt == nil && typedOther.confirmedAt == nil) || (self.confirmedAt != nil && [self.confirmedAt isEqual:typedOther.confirmedAt])) &&
            self.timestamp == typedOther.timestamp;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.id.hash ^
            (NSUInteger)self.type ^
            (NSUInteger)self.direction ^
            self.txHash.hash ^
            self.accountId.hash ^
            self.symbol.hash ^
            self.coin.hash ^
            self.network.hash ^
            self.nonce.hash ^
            (NSUInteger)self.status ^
            self.fromAddress.hash ^
            self.fromUserId.hash ^
            self.toAddress.hash ^
            self.toUserId.hash ^
            self.value.hash ^
            self.fiatValue.hash ^
            self.data.hash ^
            self.gasPrice.hash ^
            self.gasLimit.hash ^
            self.fee.hash ^
            self.fiatFee.hash ^
            self.submittedAt.hash ^
            self.confirmedAt.hash ^
            (NSUInteger)self.timestamp;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p id:%@ type:%@ direction:%@ txHash:%@ accountId:%@ symbol:%@ coin:%@ network:%@ nonce:%@ status:%@ fromAddress:%@ fromUserId:%@ toAddress:%@ toUserId:%@ value:%@ fiatValue:%@ data:%@ gasPrice:%@ gasLimit:%@ fee:%@ fiatFee:%@ submittedAt:%@ confirmedAt:%@ timestamp:%@>", self.class, (void *)self, self.id, @(self.type), @(self.direction), self.txHash, self.accountId, self.symbol, self.coin, self.network, self.nonce, @(self.status), self.fromAddress, self.fromUserId, self.toAddress, self.toUserId, self.value, self.fiatValue, self.data, self.gasPrice, self.gasLimit, self.fee, self.fiatFee, self.submittedAt, self.confirmedAt, @(self.timestamp)];
}

@end
