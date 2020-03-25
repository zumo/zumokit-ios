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

typedef void(^MnemonicCompletionBlock)(NSString * _Nullable mnemonic, NSError * _Nullable error);

@interface MnemonicCallback : NSObject <ZKMnemonicCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(MnemonicCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END


#endif /* MnemonicCallback_h */
