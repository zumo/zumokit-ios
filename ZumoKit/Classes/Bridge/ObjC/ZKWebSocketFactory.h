// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#import <Foundation/Foundation.h>
@protocol ZKWebSocket;


@protocol ZKWebSocketFactory

- (nullable id<ZKWebSocket>)createWebSocket:(nonnull NSString *)url;

@end