@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ButtonAction)
@interface BTNAction : NSObject


/**
 The attribution token associated with the Purchase Path.
 */
@property (nonatomic, copy, readonly) NSString *attributionToken;


/**
 Presents the user with the merchant product or category matching the query used to fetch the Button Action.

 @discussion
 The Button Action may display merchant inventory, take the user to an embedded web view, or the installed merchant app.
 */
- (void)start;


/**
 Presents the user with the merchant product or category matching the query used to fetch the Button Action.

 @discussion
 The Button Action may take the user to an embedded web view or the installed merchant app.
 In the case of an error in the completion, the user is not taken to a merchant product or category
 and the UX must be handled.
 
 @param completion If the error is nil, the Button Action started successfully, otherwise
 it will not start and you must handle the error.
 */
- (void)startWithCompletion:(void(^)(NSError * nullable))completion;

@end

NS_ASSUME_NONNULL_END
