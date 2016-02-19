/*
 Button SDK
 Copyright Button, Inc. 2015
 */
@import Foundation;
#import "Button_Public.h"

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
 @param completionHandler A block to be executed upon completion. (optional)
 **/
- (void)configureWithApplicationId:(NSString *)applicationId
                        completion:(void(^)(NSError *error))completionHandler;


/**
 Sets a block to be executed when a deferred deeplink URL is received.
 @param deferredDeeplinkHandler The block to be executed upon receipt of a deferred deeplink URL.
 
 @discussion Upon receiving a deferred deeplink, your application should load any relevant data
 and present appropriate UI like you would with any incoming URL to navigate the user accordingly.
 */
- (void)setDeferredDeeplinkHandler:(void(^)(NSURL *deferredDeeplinkURL))deferredDeeplinkHandler;


/**
 Checks whether Button has an action available for a buttonId and contextually relevant data.
 @param buttonId The identifier for a button (e.g. btn-xxxxxxxxxxxx).
 @param context A BTNContext object providing context about your user's current activity.
 @param completionHandler A block to be executed upon completion.
 */
- (void)willDisplayButtonWithId:(NSString *)buttonId
                        context:(BTNContext *)context
                     completion:(void(^)(BOOL willDisplay))completionHandler;


/**
 Fetches an app action for a buttonId and contextually relevant data.
 @param buttonId The identifier for a button (e.g. btn-xxxxxxxxxxxx).
 @param context A BTNContext object providing context about your user's current activity.
 @param completionHandler A block to be executed upon completion.
 */
- (void)fetchAppActionWithButtonId:(NSString *)buttonId
                           context:(BTNContext *)context
                        completion:(void(^)(BTNAppAction *appAction, NSError *error))completionHandler;



///-------------------------
/// @name Deep Link Handling
///-------------------------


/**
 Continues incoming NSUserActivity objects from Universal Links (e.g. Button Links). 
 This method should be called from your application delegate method: @c
 
 -application:continueUserActivity:userActivity:restorationHandler:
 
 @return BOOL indicating whether the Button SDK can & *will* handle the userActivity.
 **/
- (BOOL)continueUserActivity:(NSUserActivity *)userActivity;


/**
 Handles an incoming URL to your App. 
 This method should be called from your Application Delegate method: @c

 -application:openURL:sourceApplication:annotation:
 
 @return BOOL indicating whether the Button SDK can & *will* handle the URL.
 **/
- (BOOL)handleURL:(NSURL *)url;



///------------------
/// @name Attribution
///------------------

/**
 Returns the current referrerToken for the last inbound link from
 the Button marketplace or nil if none is present.
 @return String value of the last inbound referrerToken
 **/
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
 Reports an order to Button with line items.
 @param orderId An order identifier (required).
 @param currencyCode The ISO 4217 currency code. (default is USD).
 @param lineItems An array of BTNLineItem objects.
 */
- (void)reportOrderWithId:(NSString *)orderId
             currencyCode:(NSString *)currencyCode
                lineItems:(NSArray <BTNLineItem *> *)lineItems;


/**
 Reports an order to Button.
 @param orderValue The total order value in the smallest decimal unit for this currency (e.g. 3999 for $39.99).
 @param orderId An order identifier (required).
 @param currencyCode The ISO 4217 currency code. (default is USD).
 */
- (void)reportOrderWithValue:(NSInteger)orderValue
                     orderId:(NSString *)orderId
                currencyCode:(NSString *)currencyCode;



/**
 Report an event to Button.
 @param eventName The name of the event.
 @param properties A dictionary of key-value string pairs for adding detail to the event.
 */
- (void)reportEventWithName:(NSString *)eventName
                 properties:(NSDictionary <NSString *, NSString *> *)properties;



///--------------------
/// @name Debug Logging
///--------------------

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
