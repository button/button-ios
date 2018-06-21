@import Foundation;
#import "BTNTextProtocol.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BrowserHeader)
@protocol BTNBrowserHeader <NSObject>

@required
@property (nonatomic, strong, readonly) id <BTNText> title;
@property (nonatomic, strong, readonly) id <BTNText> subtitle;
@property (null_resettable, nonatomic, strong) UIColor *tintColor;
@property (nullable, nonatomic, strong) UIColor *backgroundColor;

@end

NS_ASSUME_NONNULL_END
