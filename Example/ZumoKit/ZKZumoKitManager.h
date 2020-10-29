//
//  ZKZumoKitManager.h
//  ZumoKit_Example
//
//  Created by Ivan Romanovski on 13/11/2019.
//  Copyright © 2019 Ivan Romanovski. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZKZumoKitManager : NSObject

+ (ZKZumoKitManager *)sharedManager;

- (void)initialize;

@end

NS_ASSUME_NONNULL_END
