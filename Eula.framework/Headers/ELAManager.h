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


#pragma mark - Account Information

/**
 Initialize Eula with your SDK key and secret.
 Call this method in application:didFinishLaunchingWithOptions:
 
 @discussion If you do not have a developer account register here: https://www.eula.io/register
 If you do not know you sdk key / secret you can log in to find it here: https://www.eula.io/login
**/

+ (void)setAPIKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

/**
 Your accounts APIKey.
 **/
+ (NSString *)apiKey;

/**
 Your accounts APISecret.
 **/
+ (NSString *)apiSecret;


#pragma mark - User Information

/**
 Sets the email for the User.
 @discussion This method is required if you want to use the Notification Features on `https://eula.io/`.
**/
+ (void)setUserEmail:(NSString *)email;

/**
 Sets the name for the User.
 **/
+ (void)setUserName:(NSString *)name;

/**
 Sets the imageURL for the User.
 **/
+ (void)setUserImageUrl:(NSString *)url;

/**
 The email for the 'User.
**/
+ (NSString *)userEmail;

/**
 The name for the `User`.
**/
+ (NSString *)userName;

/**
 The imageURL for the `User`.
**/
+ (NSString *)userImageUrl;


/**
 Enables the compliance/notification features on `https://eula.io/`
 @discussion A users email must be set to use this feature.
 */
+ (void)activateApp;

/**
 Logs out the user
 @discussion This method is required when your user logouts of the applicaiton.
 */
+ (void)logout;

#pragma mark - View Controllers

/**
 A sublcass of UIViewController that shows your Terms of Serrvice.
**/
+ (UIViewController *)termsOfServiceViewController;

/**
 A sublcass of UIViewController that shows your Terms of Serrvice.
 **/
+ (UIViewController *)privacyPolicyViewController;

@end
