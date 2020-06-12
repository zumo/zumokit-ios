//
//  iOSHttp.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 11/04/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#ifndef Http_h
#define Http_h

#import "ZKHttpImpl.h"
#import "ZKHttpCallback.h"

@interface HttpService : NSObject <ZKHttpImpl>

@end

#endif /* Http_h */
