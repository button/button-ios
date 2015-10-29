/*
 Button SDK
 Copyright Button, Inc. 2015
 */
@import Foundation;
#import "Button_Public.h"

@class BTNSession;

typedef void(^BTNConfigurationCompletionBlock)(NSError *error);

@interface Button : NSObject

@property (nonatomic, strong, readonly) BTNSession *session;

/**
 Returns the singleton shared Button instance
 @return Button object singleton
 **/
+ (instancetype)sharedButton;


/**
 Configures a Button instance with the provided applicationId
 @param applicationId Your applicationId (required)
 @param completionBlock block to execute when completed (optional)
 **/
- (void)configureWithApplicationId:(NSString *)applicationId
                        completion:(BTNConfigurationCompletionBlock)completionBlock;


///-------------------------
/// @name Deep Link Handling
///-------------------------


/**
 Handles an incoming URL to the App. This method should be called from
 the AppDelegate application:openURL:sourceApplication:annotation: method
 @return BOOL indicating whether the Button SDK can & *will* handle the URL
 @note The Button SDK handles URLs asynchronously. The action may not be complete
 at the time that this method returns
 **/
- (BOOL)handleURL:(NSURL *)url;


///------------------
/// @name Attribution
///------------------


/**
 The Button referrer token `btn_ref` indicating the last referrer.
 */
- (NSString *)referrerToken;


/**
 Associate your ID for the current user with the Button session
 @param thirdPartyId your identifier for the user
 @note This is required for attribution.
 @warning This will fail silently if there is no session. Run only
 when you know Button is configured (e.g. in the completion block of 
 configureWithApplicationId:completion:)
 **/
- (void)setThirdPartyId:(NSString *)thirdPartyId;


/**
 Reports an order to Button.
 @param orderValue The value of the order in pennies.
 @param orderId An order identifier (required).
 @param currencyCode The ISO 4217 currency code. (default is USD).
 */
- (void)reportOrderWithValue:(NSInteger)orderValue
                     orderId:(NSString *)orderId
                currencyCode:(NSString *)currencyCode;


///----------------------------
/// @name Notification Handling
///----------------------------


/**
 Handles local notifications created by the Button SDK (e.g. Reminders)
 @param notification A local notification to be handled.
 @return YES if the notification was handled by Button, otherwise NO.
 */
- (BOOL)handleLocalNotification:(UILocalNotification *)notification;


///------------------
/// @name Debugging
///------------------


/**
 Sets whether the Button SDK will output debug log messages to the console.
 @discussion You should ship to the App Store with this disabled.
 
 @param enabled Pass YES to enable debug log messages to the console.
 @note The default value is NO.
 */
- (void)setDebugLoggingEnabled:(BOOL)enabled;


///------------------
/// @name Permissions
///------------------


/**
 Sets whether the Button SDK is allowed to request system level location permission.
 @discussion Button will never ask your users for system level permissions unless you explicitly allow it.
 
 @param isAllowed A boolean indicating whether requesting location permission is allowed.
 @note The default value is NO.
 */
+ (void)allowButtonToRequestLocationPermission:(BOOL)isAllowed;


@end
