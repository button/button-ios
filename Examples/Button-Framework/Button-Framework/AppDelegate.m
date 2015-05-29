#import "AppDelegate.h"
#import <Button/Button.h>

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    /// This is not required if you manage your own permission requesting.
    [BTNLocationManager allowButtonToRequestLocationPermission:YES];
    
    [[Button sharedButton] configureWithApplicationId:@"app-0000000000000000" completion:^(NSError *error) {
        NSLog(@"Error: %@", error.localizedDescription);
    }];
    
    return YES;
}


- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    
    [[Button sharedButton] handleURL:url];
    
    return YES;
}

@end
