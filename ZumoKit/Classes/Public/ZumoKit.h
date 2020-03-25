//
//  ZumoKit.h
//  ZumoKit
//
//  Created by Tim Šabanov on 07/02/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ZumoKit.
FOUNDATION_EXPORT double ZumoKitVersionNumber;

//! Project version string for ZumoKit.
FOUNDATION_EXPORT const unsigned char ZumoKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ZumoKit/PublicHeader.h>

#import <Foundation/Foundation.h>
#import "ZKError.h"
#import "ZKState.h"
#import "ZKStateListener.h"
#import "ZKUtils.h"
#import "ZKUser.h"
#import "ZKUser+CallbackCompletion.h"
#import "ZKWallet.h"
#import "ZKWallet+CallbackCompletion.h"

typedef void(^AuthCompletionBlock)(ZKUser * _Nullable user, NSError * _Nullable error);

NS_ASSUME_NONNULL_BEGIN
@interface ZumoKit : NSObject

@property(strong, nonatomic) ZKUtils *utils;

+ (nonnull NSString *)version;

- (instancetype)initWithTxServiceUrl:(NSString *)txServiceUrl
                              apiKey:(NSString *)apiKey
                             apiRoot:(NSString *)apiRoot
                              myRoot:(NSString *)myRoot;

- (void)auth:(nonnull NSString *)token
     headers:(nullable NSDictionary<NSString *, NSString *> *)headers
  completion:(_Nonnull AuthCompletionBlock)completionHandler;

- (nonnull ZKState *)getState;

- (void)addStateListener:(nullable id<ZKStateListener>)listener;

- (void)removeStateListener:(nullable id<ZKStateListener>)listener;

@end
NS_ASSUME_NONNULL_END

