@import Foundation;
#import "BTNTextProtocol.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BrowserHeader)
@protocol BTNBrowserHeader <NSObject>

@required

/**
 The title of the browser header chrome.
 */
@property (nonatomic, strong, readonly) id <BTNText> title;

/**
 The subtitle of the browser header chrome.
 */
@property (nonatomic, strong, readonly) id <BTNText> subtitle;

/**
 The tint color of the browser header chrome.
 */
@property (null_resettable, nonatomic, strong) UIColor *tintColor;

/**
 The background color of the browser header chrome.
 */
@property (nullable, nonatomic, strong) UIColor *backgroundColor;

@end

NS_ASSUME_NONNULL_END
