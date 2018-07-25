@import Foundation;

// Actions
#import "BTNAction.h"
#import "BTNActionQuery.h"
#import "BTNActionRequest.h"

// UI Components
#import "BTNDropinButton.h"
#import "BTNDropinButtonCell.h"
#import "BTNInteractiveButton.h"

NS_ASSUME_NONNULL_BEGIN

@class BTNActionRequest, BTNAction;


/**
 Buttons provide relevant actions to your users, complete with a corresponding UI. Buttons can be configured
 with one or more Merchants that they can offer to your users.
 https://developer.usebutton.com/guides/publishers/ios/using-button-actions
 */
NS_SWIFT_NAME(ButtonActionsInterface)
@protocol BTNButtonActionsInterface

@required


/**
 Fetches a Button Action with an action request.

 @param request A Button Action request.
 @param actionHandler A block to be called upon completion of the Button Action fetch.
                      The block passes a `buttonAction` on success or an `error` if one occurred.
 */
- (void)fetchWithRequest:(BTNActionRequest *)request
           actionHandler:(void(^)(BTNAction * __nullable buttonAction, NSError * __nullable error))actionHandler NS_SWIFT_NAME(fetch(request:completion:));

@end

NS_ASSUME_NONNULL_END

