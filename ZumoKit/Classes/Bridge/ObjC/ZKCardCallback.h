// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user.djinni

#import "ZKCard.h"
#import <Foundation/Foundation.h>


/** Callback interface used by methods in `ZKUser` class. */
@protocol ZKCardCallback

- (void)onError:(nonnull NSError *)e;

- (void)onSuccess:(nonnull ZKCard *)card;

@end