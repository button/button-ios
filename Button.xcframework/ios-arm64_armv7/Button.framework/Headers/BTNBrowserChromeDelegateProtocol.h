@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BrowserChromeDelegate)
@protocol BTNBrowserChromeDelegate <NSObject>

@optional

/**
 Called when the custom view has been tapped.

 @param browser The interface to the browser object that can be used to customize the display.
 @param view The custom view set on the browser header.
 @note Must have set a custom view on the browser header first in order to receive this callback.
 */
- (void)browser:(id<BTNBrowserInterface>)browser didSelectCustomActionWithView:(__kindof UIView *)view;


/**
 Called when the header subtitle has been tapped.

 @param browser The interface to the browser object that can be used to customize the display.
 */
- (void)browserDidSelectSubtitle:(id<BTNBrowserInterface>)browser;

@end

NS_ASSUME_NONNULL_END
