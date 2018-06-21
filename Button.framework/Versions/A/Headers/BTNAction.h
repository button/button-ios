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

@end

NS_ASSUME_NONNULL_END
