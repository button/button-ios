@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PurchasePath)
@interface BTNPurchasePath : NSObject


/**
 The attribution token associated with the Purchase Path.
 */
@property (nonatomic, copy, readonly) NSString *attributionToken;


/**
 Presents the user with the merchant product or category represented by the URL used to fetch the Purchase Path.

 @discussion
 The Purchase Path may take the user to an embedded web view or the installed merchant app.
 */
- (void)start;

@end

NS_ASSUME_NONNULL_END
