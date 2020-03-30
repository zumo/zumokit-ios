//
//  iOSSendTransactionCallback.h
//  Pods
//
//  Created by Ivan Romanovski on 17/06/2019.
//

#import <Foundation/Foundation.h>

#import "ZKWalletCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^WalletCompletionBlock)(bool success, ZKZumoKitError * _Nullable error, ZKWallet * _Nullable wallet);

@interface WalletCallback : NSObject <ZKWalletCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(WalletCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
