// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networking.djinni

#import <Foundation/Foundation.h>
@class ZKHttpCallback;


@protocol ZKHttpProvider

- (void)request:(nonnull NSString *)url
         method:(nonnull NSString *)method
        headers:(nonnull NSDictionary<NSString *, NSString *> *)headers
           data:(nullable NSString *)data
       callback:(nullable ZKHttpCallback *)callback;

@end
