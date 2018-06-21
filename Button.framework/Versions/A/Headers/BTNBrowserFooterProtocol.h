@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BrowserFooter)
@protocol BTNBrowserFooter <NSObject>

@required
@property (null_resettable, nonatomic, strong) UIColor *tintColor;
@property (nullable, nonatomic, strong) UIColor *backgroundColor;

@end

NS_ASSUME_NONNULL_END
