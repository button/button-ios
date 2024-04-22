@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BrowserPage)
@protocol BTNBrowserPage <NSObject>

/**
 The URL of the page to which the user has navigated.
 */
@property (nullable, nonatomic, readonly, strong) NSURL *url;


/**
 Obtains the current page's HTML.

 @param completion Containing the HTML of the current page.
 */
- (void)getBrowserDOM:(void(^)(NSString *HTML))completion;

@end

NS_ASSUME_NONNULL_END
