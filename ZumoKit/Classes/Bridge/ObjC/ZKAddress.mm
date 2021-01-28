// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKAddress.h"


@implementation ZKAddress

- (nonnull instancetype)initWithAddressLine1:(nonnull NSString *)addressLine1
                                addressLine2:(nullable NSString *)addressLine2
                                     country:(nonnull NSString *)country
                                    postCode:(nonnull NSString *)postCode
                                    postTown:(nonnull NSString *)postTown
{
    if (self = [super init]) {
        _addressLine1 = [addressLine1 copy];
        _addressLine2 = [addressLine2 copy];
        _country = [country copy];
        _postCode = [postCode copy];
        _postTown = [postTown copy];
    }
    return self;
}

+ (nonnull instancetype)addressWithAddressLine1:(nonnull NSString *)addressLine1
                                   addressLine2:(nullable NSString *)addressLine2
                                        country:(nonnull NSString *)country
                                       postCode:(nonnull NSString *)postCode
                                       postTown:(nonnull NSString *)postTown
{
    return [(ZKAddress*)[self alloc] initWithAddressLine1:addressLine1
                                             addressLine2:addressLine2
                                                  country:country
                                                 postCode:postCode
                                                 postTown:postTown];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKAddress class]]) {
        return NO;
    }
    ZKAddress *typedOther = (ZKAddress *)other;
    return [self.addressLine1 isEqualToString:typedOther.addressLine1] &&
            ((self.addressLine2 == nil && typedOther.addressLine2 == nil) || (self.addressLine2 != nil && [self.addressLine2 isEqual:typedOther.addressLine2])) &&
            [self.country isEqualToString:typedOther.country] &&
            [self.postCode isEqualToString:typedOther.postCode] &&
            [self.postTown isEqualToString:typedOther.postTown];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.addressLine1.hash ^
            self.addressLine2.hash ^
            self.country.hash ^
            self.postCode.hash ^
            self.postTown.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p addressLine1:%@ addressLine2:%@ country:%@ postCode:%@ postTown:%@>", self.class, (void *)self, self.addressLine1, self.addressLine2, self.country, self.postCode, self.postTown];
}

@end
