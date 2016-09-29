//
//  ELAManager.h
//  Eula
//
//  Created by Adam Cooper on 8/21/16.
//  Copyright © 2016 Adam Cooper. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ELAManager : NSObject

+ (void)setAPIKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

// Acount Specifc

+ (NSString *)appName;
+ (NSString *)apiKey;
+ (NSString *)apiSecret;


//User Specifc

+ (NSString *)userIdentifier;
+ (void)setUserIdentifier:(NSString *)identifier;

+ (NSString *)userName;
+ (void)setUserName:(NSString *)userName;

+ (NSString *)userImageUrl;
+ (void)setUserImageUrl:(NSString *)userImageUrl;


+ (void)activateApp;

+ (void)logout;

#pragma mark - View Controllers

+ (UIViewController *)termsOfServiceViewController;
+ (UIViewController *)privacyPolicyViewController;

#pragma mark - Design

+ (void)setScrollToBottomEnabled:(BOOL)enabled;
+ (BOOL)scrollToBottomEnabled;

+ (void)setAlertOnAgreeEnabled:(BOOL)enabled;
+ (BOOL)alertOnAgreeEnabled;

@end
