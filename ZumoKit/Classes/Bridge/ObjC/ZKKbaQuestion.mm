// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKKbaQuestion.h"


@implementation ZKKbaQuestion

- (nonnull instancetype)initWithType:(nonnull NSString *)type
                            question:(nonnull NSString *)question
{
    if (self = [super init]) {
        _type = [type copy];
        _question = [question copy];
    }
    return self;
}

+ (nonnull instancetype)kbaQuestionWithType:(nonnull NSString *)type
                                   question:(nonnull NSString *)question
{
    return [(ZKKbaQuestion*)[self alloc] initWithType:type
                                             question:question];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[ZKKbaQuestion class]]) {
        return NO;
    }
    ZKKbaQuestion *typedOther = (ZKKbaQuestion *)other;
    return [self.type isEqualToString:typedOther.type] &&
            [self.question isEqualToString:typedOther.question];
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            self.type.hash ^
            self.question.hash;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p type:%@ question:%@>", self.class, (void *)self, self.type, self.question];
}

@end
