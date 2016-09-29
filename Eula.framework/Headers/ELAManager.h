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

/**
 Initialize Eula with your SDK key and secret.
 Call this method in application:didFinishLaunchingWithOptions:
 
 @discussion If you do not have a developer account register here: https://www.eula.io/register
 If you do not know you sdk key / secret you can log in to find it here: https://www.eula.io/login
**/

+ (void)setAPIKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

// Acount Specifc Getters
+ (NSString *)apiKey;
+ (NSString *)apiSecret;
    
#pragma mark - App Information

+ (void)setAppName:(NSString *)appName;
+ (NSString *)appName;

#pragma mark - View Controllers

+ (UIViewController *)termsOfServiceViewController;
+ (UIViewController *)privacyPolicyViewController;

@end
