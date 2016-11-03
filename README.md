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
##### _Objective C_
Somewhere near the top of your `-applicationDidFinishLaunching:withOptions:`, add `[ELAManager setAPIKey:@"YOUR_API_KEY" apiSecret:@"YOUR_API_SECRET"]`, where `YOUR_API_KEY` and `YOUR_API_SECRET` are two special tokens found on the [API Docs](http://eula.io/api-documents) of your dashboard.

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

func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {

// Add this line
ELAManager.setAPIKey("YOUR_API_KEY", apiSecret:"YOUR_API_SECRET")

...
}
```
---
### Author

Adam Cooper, team@eula.io

### License

EULA is available under the Apache 2.0 license. See the LICENSE file for more info.
