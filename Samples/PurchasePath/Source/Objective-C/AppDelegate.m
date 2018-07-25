#import "AppDelegate.h"
#import <Button/Button.h>
#import "ObjC_Demo-Swift.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    /// To get started and get an App ID, please see https://developer.usebutton.com/guides/publishers/ios/get-started
    NSString *yourApplicationId = ApplicationId.stringValue;
    [Button configureWithApplicationId:yourApplicationId completion:nil];

    return YES;
}

@end
