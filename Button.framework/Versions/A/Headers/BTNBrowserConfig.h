@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 Configuration class used to provide customizable parameters to the Browser.
*/
NS_SWIFT_NAME(BrowserConfig)
@interface BTNBrowserConfig : NSObject

/**
 An optional token to be associated with all downstream orders, transactions and webhooks. (Max 100 chars.)
 */
@property (nullable, nonatomic, readwrite, copy) NSString *pubRef;


/**
 The Button-provided identifier for the offer backing the Purchase Path this may begin.
 */
@property (nullable, nonatomic, copy) NSString *offerId;


/**
 The title to show in the Browser header chrome.
 */
@property (nullable, nonatomic, readwrite, copy) NSString *title;


/**
 The subtitle to show in the Browser header chrome.
 */
@property (nullable, nonatomic, readwrite, copy) NSString *subtitle;


/**
 Initializes a Browser Config object with a `pubRef`.

 @param pubRef The token to be associated with all downstream orders, transactions and webhooks. (Max 100 chars.)
 @return A configuration object populated with the provided `pubRef`.
*/
- (instancetype)initWithPubRef:(NSString *)pubRef;


/**
 Initializes a Browser Config object with a `title` and an optional `subtitle`.

 @param title The title to show in the Browser header chrome.
 @param subtitle The optional subtitle to show in the Browser header chrome.
 @return A configuration object populated with the provided `title` and `subtitle`.
*/
- (instancetype)initWithTitle:(NSString *)title subtitle:(nullable NSString *)subtitle;


@end

NS_ASSUME_NONNULL_END
