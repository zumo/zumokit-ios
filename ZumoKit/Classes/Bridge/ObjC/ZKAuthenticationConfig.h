// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from records.djinni

#import "ZKKbaQuestion.h"
#import <Foundation/Foundation.h>

/** Record containing Strong Customer Authentication (SCA) config */
@interface ZKAuthenticationConfig : NSObject
- (nonnull instancetype)initWithKnowledgeBase:(nonnull NSArray<ZKKbaQuestion *> *)knowledgeBase;
+ (nonnull instancetype)authenticationConfigWithKnowledgeBase:(nonnull NSArray<ZKKbaQuestion *> *)knowledgeBase;

/** Knowledge-Based Authentication (KBA) questions. */
@property (nonatomic, readonly, nonnull) NSArray<ZKKbaQuestion *> * knowledgeBase;

@end