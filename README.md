<p align="center"><img src="https://s3-us-west-1.amazonaws.com/eula-assets/eula-logo.png" width="100" alt="EULA Logo"/></p>

# EULA iOS SDK

The EULA iOS SDK supports products featured on http://www.eula.io

If you do not have a developer account, please register for one [HERE](http://www.eula.io/register).

## Install and Configure Eula iOS SDK

### Step 1

EULA is available through [CocoaPods](http://cocoapods.org/). To install it, simply add the following line to your `Podfile`:

```
pod 'Eula'
```

### Step 2
#### Add to your App Delegate
Somewhere near the top of your `-applicationDidFinishLaunching:withOptions:`, add `[ELAManager setAPIKey:@"YOUR_API_KEY" apiSecret:@"YOUR_API_SECRET"]`, where `YOUR_API_KEY` and `YOUR_API_SECRET` are two special tokens found on the [API Docs](http://eula.io/api-documents) of your dashboard.

##### _Objective C_

```objc
#import <Eula/Eula.h>

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Add this line
    [ELAManager setAPIKey:@"YOUR_API_KEY" apiSecret:@"YOUR_API_SECRET"];
    ...
}
```

##### _Swift_

```swift
import Eula

func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool 
{
    // Add this line
    ELAManager.setAPIKey("YOUR_API_KEY", apiSecret:"YOUR_API_SECRET")
    ...
}
```

### Step 3
#### Set User Credentials
In general, you should set the User's `email` and `userName`  when the user logs in to your application, and call `-logOut` when they log out.
##### _Objective C_

```objc
#import <Eula/Eula.h>
{
   [ELAManager setUserEmail:@"USER_EMAIL"];
   [ELAManager setUserName:@"USER_NAME"];
    ...
}
```

##### _Swift_

```swift
import Eula
{
    ELAManager. setUserEmail("USER_EMAIL")
    ELAManager. setUserName("USER_NAME")
    ...
}
```
---

### Step 4
#### Activate App
Somewhere near the top of your `-applicationDidBecomeActive:` call `-activateApp`.
##### _Objective C_

```objc
#import <Eula/Eula.h>

- (void)applicationDidBecomeActive:(UIApplication *)application 
{
    // Add this line
    [ELAManager activateApp];
    ...
}
```

##### _Swift_

```swift
import Eula

func applicationDidBecomeActive(_ application: UIApplication) 
{
    // Add this line
    ELAManager.activateApp()
    ...
}
```
---
### Author

Adam Cooper, team@eula.io

### License

EULA is available under the Apache 2.0 license. See the LICENSE file for more info.
