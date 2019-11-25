//
//  iOSSyncCallbach.h
//  ZumoKitSDK
//
//  Created by Ivan Romanovski on 28/08/2019.
//

#import <Foundation/Foundation.h>

#import "ZKSyncCallback.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^SyncCompletionBlock)(bool success, short errorCode, NSString * _Nullable errorMessage);

@interface SyncCallback : NSObject <ZKSyncCallback>

- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithCompletionHandler:(SyncCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
