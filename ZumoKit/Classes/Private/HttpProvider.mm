//
//  iOSHttp.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 11/04/2019.
//  Copyright © 2019 Zumo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpProvider.h"

/**
 Handles all network requests within the iOS version of ZumoKit
 */
@implementation HttpProvider

/**
 Perform a new HTTP with the parameters provided.

 @param urlString The URL to request
 @param method The HTTP method that should be used
 @param headers A dictionary of headers that should be sent
 @param data The data to send with the request
 @param callback A callback to populate with the response
 */
- (void)request:(nonnull NSString *)urlString
         method:(nonnull NSString *)method
        headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
           data:(nullable NSString *)data
       callback:(nullable ZKHttpCallback *)callback
{

    NSURL *url = [NSURL URLWithString:urlString];
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:url];

    [request setHTTPMethod:method];
    [request setAllHTTPHeaderFields:headers];

    if(data) {
        [request setHTTPBody:[data dataUsingEncoding:NSUTF8StringEncoding]];
    }

    NSURLSession *session = [NSURLSession sharedSession];

    NSURLSessionDataTask *task = [session
     dataTaskWithRequest:request
     completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error)
    {

        if(error) {
            [callback onNetworkError:[error localizedDescription]];
            return;
        }

        NSHTTPURLResponse *httpResponse = (NSHTTPURLResponse *) response;

        short statusCode = (unsigned short) [httpResponse statusCode];
        NSString *dataString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];

        [callback onSuccess:statusCode data:dataString];

    }];

    NSLog(@"Requesting %@", url);

    [task resume];

}

@end
