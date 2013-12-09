//
//  GrowthPushInternal.h
//  GrowthPushPlugin
//
//  Created by TSURUDA Ryo on 2013/12/09.
//  Copyright (c) 2013年 TSURUDA Ryo. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <GrowthPush/EGPOption.h>
#import <GrowthPush/GPEnvironment.h>

@interface GrowthPushInternal : NSObject

+ (void)setApplicationId:(NSInteger)applicationId secret:(NSString *)secret environment:(GPEnvironment)environment debug:(BOOL)debug;
+ (void)setApplicationId:(NSInteger)applicationId secret:(NSString *)secret environment:(GPEnvironment)environment debug:(BOOL)debug option:(EGPOption)option;
+ (void)requestDeviceToken;
+ (void)setDeviceToken:(NSData *)deviceToken;
+ (void)trackEvent:(NSString *)name;
+ (void)trackEvent:(NSString *)name value:(NSString *)value;
+ (void)setTag:(NSString *)name;
+ (void)setTag:(NSString *)name value:(NSString *)value;
+ (void)setDeviceTags;
+ (void)clearBadge;

@end
