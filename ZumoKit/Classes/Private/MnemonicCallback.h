//
//  iOSMnemonicCallback.h
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 09/10/2019.
//

#ifndef MnemonicCallback_h
#define MnemonicCallback_h

#import "ZKMnemonicCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^MnemonicCompletionBlock)(bool success, ZKZumoKitError * _Nullable error, NSString * _Nullable mnemonic);

@interface MnemonicCallback : NSObject <ZKMnemonicCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(MnemonicCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END


#endif /* MnemonicCallback_h */
