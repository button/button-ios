/*
 Button SDK
 Copyright Button, Inc. 2014-2018
 */
@import Foundation;
#import "Button_Public.h"

NS_ASSUME_NONNULL_BEGIN

@interface Button : NSObject

/**
 The current SDK version (e.g. @"6.0.0")
 */
@property (class, readonly) NSString *version;



///-----------------------
/// @name Starting the SDK
///-----------------------

/**
 Configures Button with your `applicationId`.

 @note
 Get your application Id from from the [Button Dashboard](https://app.usebutton.com)

 @params applicationId Your applicationId (required)
 @param completionHandler A block to be executed upon completion (optional).
 */
+ (void)configureWithApplicationId:(NSString *)applicationId
                        completion:(nullable void(^)(NSError * __nullable error))completionHandler NS_SWIFT_NAME(configure(applicationId:completion:));



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



///------------------------------
/// @name Fetching Button Actions
///------------------------------

/**
 Buttons provide relevant actions to your users, complete with a corresponding UI. Buttons can be configured
 with one or more Merchants that they can offer to your users.
 https://developer.usebutton.com/guides/publishers/ios/using-button-actions

 Example usage:

 @code
 BTNLocation *subjectLocation = [BTNLocation locationWithLatitude:40.71 longitude:74.0];
 BTNActionQuery *query = [BTNActionQuery queryWithSubjectLocation:subjectLocation];
 BTNActionRequest *request = [BTNActionRequest requestWithButtonId:@"btn-abc123" query:query];
 [Button.actions fetchWithRequest:request actionhandler:^(BTNAction *buttonAction, NSError *error) {
    [buttonAction start];
 }];
 @endcode
 */
@property (class, readonly) id <BTNButtonActionsInterface> actions;



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

NS_ASSUME_NONNULL_END
