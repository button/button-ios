/*
 Button SDK
 Copyright Button, Inc. 2014-2024
 */
@import Foundation;
#import "Button_Public.h"

NS_ASSUME_NONNULL_BEGIN

/**
 The main interface to the Button SDK.
 */
@interface Button : NSObject

/**
 @returns The current SDK version (e.g. @"6.33.0").
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


///-------------------------------
/// @name Fetching a Purchase Path
///-------------------------------

/**
 Button Purchase Path takes regular Merchant URLs to products, categories or just the homepage and replaces
 them with a fully attributed Button Purchase Path, optimized for both conversion and user experience.
 https://developer.usebutton.com/docs/publishers-ios-app-setup#handle-link-routing-when-a-user-taps

 Example usage:

 @code
 BTNPurchasePathRequest *request = [BTNPurchasePathRequest requestWithURL:merchantURL];
 [Button.purchasePath fetchWithRequest:request purchasePathHandler:^(BTNPurchasePath *purchasePath, NSError *error) {
    [purchasePath start];
 }];
 @endcode
 */
@property (class, readonly) id <BTNPurchasePathInterface> purchasePath;



///-----------------------
/// @name User Association
///-----------------------

/**
 Associate your user with a Button session.

 @discussion
 You can associate all Button activity with one of your users by setting their User Identifier.
 This can be your user ID or a stable hash of one. You can use this later to look up orders in
 [Webhooks](https://developer.usebutton.com/guides/publishers/configure-webhooks).

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
/// @name Offers
///-----------------------

/**
 Offer impressions
 */
@property (class, readonly) id <BTNOffersInterface> offers;



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

@interface Button (Browser) <BTNButtonBrowser>

@end

///--------------------
/// @name DEPRECATIONS
///--------------------

@interface Button (Deprecations) <ButtonDeprecations>

@end

NS_ASSUME_NONNULL_END
