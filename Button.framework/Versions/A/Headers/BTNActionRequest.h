@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@class BTNActionQuery;

/**
 A Button Action request defines the parameters for fetching an action.

 @see ButtonActionsInterface
 */
NS_SWIFT_NAME(ActionRequest)
@interface BTNActionRequest : NSObject

/**
 The identifier for your button (e.g. btn-xxxxxxxxxxxx).

 @note
 Get or create button Ids from from the [Button Dashboard](https://app.usebutton.com)
 */
@property (nonatomic, copy, readonly) NSString *buttonId;


/**
 An action query object providing context about your user's current activity.
 */
@property (nonatomic, copy, readonly) BTNActionQuery *query;


/**
 An optional token to be associated with all downstream orders, transactions and webhooks. (Max 100 chars.)
 */
@property (nonatomic, copy) NSString *pubRef;


/**
 Initializes a Button Actions request for a given button Id and action query.

 @param buttonId The identifier for your button (e.g. btn-xxxxxxxxxxxx).
 @param query An action query object providing context about your user's current activity.
 @return A new Button Action request.
 */
+ (instancetype)requestWithButtonId:(NSString *)buttonId
                              query:(BTNActionQuery *)query NS_SWIFT_NAME(init(buttonId:query:));

@end

NS_ASSUME_NONNULL_END
