@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BrowserFooter)
@protocol BTNBrowserFooter <NSObject>

@required

/**
 The tint color of the browser footer chrome.
 */
@property (null_resettable, nonatomic, strong) UIColor *tintColor;

/**
 The background color of the browser header chrome.
 */
@property (nullable, nonatomic, strong) UIColor *backgroundColor;

@end

NS_ASSUME_NONNULL_END
