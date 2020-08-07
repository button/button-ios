/*
 Button SDK
 Copyright Button, Inc. 2014-2019
 */
@import Foundation;
#import "Button_Public.h"

NS_ASSUME_NONNULL_BEGIN

@interface Button : NSObject

/**
 The current SDK version (e.g. @"6.0.0").
 */
@property (class, readonly) NSString *version;



///-----------------------
/// @name Starting the SDK
///-----------------------

/**
 Configures Button with your `applicationId`.

 @note
 Get your application Id from from the [Button Dashboard](https://app.usebutton.com).

 @params applicationId Your applicationId (required).
 @param completionHandler A block to be executed upon completion (optional).
 */
+ (void)configureWithApplicationId:(NSString *)applicationId
                        completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(configure(applicationId:completion:));



///-----------------------
/// @name Opening a URL
///-----------------------

/**
 Opens a URL in the Browser. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 */
+ (void)openURL:(NSURL *)url
NS_SWIFT_NAME(open(url:));


/**
 Opens a URL in the Browser with a configuration object. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param config An object used to configure the Browser (optional).
 */
+ (void)openURL:(NSURL *)url
         config:(nullable BTNBrowserConfig *)config
NS_SWIFT_NAME(open(url:config:));


/**
 Opens a URL in the Browser with a completion handler. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param completionHandler A block that is invoked after opening the URL (optional).
 */
+ (void)openURL:(NSURL *)url
         completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(open(url:completion:));


/**
 Opens a URL in the Browser with a configuration object and a completion handler.
 Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param config An object used to configure the Browser (optional).
 @param completionHandler A block that is invoked after opening the URL (optional).
 */
+ (void)openURL:(NSURL *)url
         config:(nullable BTNBrowserConfig *)config
         completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(open(url:config:completion:));


/**
 Opens a URL in the Browser. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param title A title to set on the Browser (optional).
 @param subtitle A subtitle to set on the Browser (optional).
 @param completionHandler A block that is invoked after opening the URL (optional).
 */
+ (void)openURL:(NSURL *)url
          title:(nullable NSString *)title
       subtitle:(nullable NSString *)subtitle
     completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(open(url:title:subtitle:completion:))
DEPRECATED_MSG_ATTRIBUTE("Use '[Button openURL:]' or any of the other method signatures instead.");



///-------------------------------
/// @name Fetching a Purchase Path
///-------------------------------

/**
 Button Purchase Path takes regular Merchant URLs to products, categories or just the homepage and replaces
 them with a fully attributed Button Purchase Path, optimized for both conversion and user experience.
 https://developer.usebutton.com/guides/publishers/ios/create-a-button-purchase-path

 Example usage:

 @code
 BTNPurchasePathRequest *request = [BTNPurchasePathRequest requestWithURL:merchantURL];
 [Button.purchasePath fetchWithRequest:request purchasePathHandler:^(BTNPurchasePath *purchasePath, NSError *error) {
    [purchasePath start];
 }];
 @endcode
 */
@property (class, readonly) id <BTNPurchasePathInterface> purchasePath;



///--------------------------------
/// @name Fetching a Boost Response
///--------------------------------


/**
 Boost is a private beta product. If you're interested in Boost, reach out to your Button contact.
 */
@property (class, readonly) id <BTNBoostInterface> boost;



///-----------------------
/// @name User Association
///-----------------------

/**
 Associate your user with a Button session.

 @discussion
 You can associate all Button activity with one of your users by setting their User Identifier.
 This can be your user ID, email or a stable hash of one. You can use this later to look up orders,
 activity and identify the user in [Webhooks](https://developer.usebutton.com/guides/publishers/configure-webhooks).

 @code
 Button.user.setIdentifier(myLoggedInUser.identifier);
 @endcode
 */
@property (class, readonly) id <BTNUser> user;



///-----------------------
/// @name Feature Configuration
///-----------------------

/**
 Button SDK feature configuration.
 */
@property (class, readonly) id <BTNConfigurationInterface> configuration;



///-----------------------
/// @name Personalization
///-----------------------

/**
 Personalize your user's experience.
 */
@property (class, readonly) id <BTNPersonalizationInterface> personalization;



///----------------
/// @name Debugging
///----------------

/**
 Debug the Button SDK.

 @discussion
 Enable debug logging during integration for more visibility.

 @code
 Button.debug.loggingEnabled = YES;
 @endcode
 */
@property (class, readonly) id <BTNDebugInterface> debug;



///--------------------
/// @name Clearing Data
///--------------------

/**
 Discards the current session and all persisted data.

 @discussion
 Call this method in your log out handler if/when your user logs out of your app.
 */
+ (void)clearAllData;

@end


///--------------------
/// @name DEPRECATIONS
///--------------------

@interface Button (Deprecations) <ButtonActionsDeprecation>

@end

NS_ASSUME_NONNULL_END

