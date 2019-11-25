//
//  ZKZumoKitManager.h
//  ZumoKit_Example
//
//  Created by Ivan Romanovski on 13/11/2019.
//  Copyright © 2019 Ivan Romanovski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ZumoKit/ZumoKit.h>
#import <ZumoKit/ZKStateListener.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZKZumoKitManager : NSObject<ZKStateListener>

+ (ZKZumoKitManager *)sharedManager;

- (void)update:(nonnull ZKState *)state;

- (void)initialize;

@end

NS_ASSUME_NONNULL_END
