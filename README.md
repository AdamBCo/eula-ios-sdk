<p align="center"><img src="https://s3-us-west-1.amazonaws.com/userswitch-web-assets/userswitch_logo.png" width="300" alt="UserSwitch Logo"/></p>



# UserSwitch iOS SDK

The UserSwitch iOS SDK supports products featured on http://www.UserSwitch.io

If you do not have a developer account, please register for one [HERE](http://www.userSwitch.com/register).

## Install and Configure UserSwitch iOS SDK

### Step 1

UserSwitch is available through [CocoaPods](http://cocoapods.org/). To install it, simply add the following line to your `Podfile`:

```
pod 'UserSwitch'
```

### Step 2
#### Add to your App Delegate
Somewhere near the top of your `-applicationDidFinishLaunching:withOptions:`, add `[UserSwitchManager setAPIKey:@"YOUR_API_KEY" apiSecret:@"YOUR_API_SECRET"]`, where `YOUR_API_KEY` and `YOUR_API_SECRET` are two special tokens found on the [API Docs](http://userSwitch.io/api-documents) of your dashboard.

##### _Objective C_

```objc
#import <UserSwitch/UserSwitch.h>

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Add this line
    [UserSwitchManager setAPIKey:@"YOUR_API_KEY" apiSecret:@"YOUR_API_SECRET"];
    ...
}
```

##### _Swift_

```swift
import UserSwitch

func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool 
{
    // Add this line
    UserSwitchManager.setAPIKey("YOUR_API_KEY", apiSecret:"YOUR_API_SECRET")
    ...
}
```

### Step 3
#### Set User Credentials
In general, you should set the User's `email` and `userName`  when the user logs in to your application, and call `-logOut` when they log out.
##### _Objective C_

```objc
#import <UserSwitch/UserSwitch.h>
{
   [UserSwitchManager setUserEmail:@"USER_EMAIL"];
   [UserSwitchManager setUserName:@"USER_NAME"];
    ...
}
```

##### _Swift_

```swift
import UserSwitch
{
    UserSwitchManager. setUserEmail("USER_EMAIL")
    UserSwitchManager. setUserName("USER_NAME")
    ...
}
```
---

### Step 4
#### Report User
Somewhere near the top of your `-applicationDidBecomeActive:` call `-activateApp`.
##### _Objective C_

```objc
#import <UserSwitch/UserSwitch.h>

- (void)applicationDidBecomeActive:(UIApplication *)application 
{
    // Add this line
    [UserSwitchManager reportUserWithIdentifier:"USER_ID"];
    ...
}
```

##### _Swift_

```swift
import UserSwitch

func applicationDidBecomeActive(_ application: UIApplication) 
{
    // Add this line
    UserSwitchManager.reportUserWithIdentifier("USER_ID")
    ...
}
```
---
### Author

Adam Cooper, team@userSwitch.com

### License

UserSwitch is available under the Apache 2.0 license. See the LICENSE file for more info.
