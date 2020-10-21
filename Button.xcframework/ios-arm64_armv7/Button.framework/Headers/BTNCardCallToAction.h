@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CardCallToAction)
@interface BTNCardCallToAction : NSObject

/**
 The icon representing the call to action.
 */
@property (nonatomic, strong, readwrite) UIImage *icon;


/**
 The title text for the call to action.
 */
@property (nonatomic, copy, readwrite) NSString *title;


/**
 The color for the call to action title text.
 */
@property (nonatomic, strong, readwrite) UIColor *titleColor;


/**
 Creates a call to action instance.

 @param icon The icon representing the call to action.
 @param title The title text for the call to action.
 @param titleColor The color for the call to action title text.
 @return Returns a call to action instance.
 */
- (instancetype)initWithIcon:(UIImage *)icon
                       title:(NSString *)title
                  titleColor:(UIColor *)titleColor;
- (instancetype)init __attribute__((unavailable("Use -initWithIcon:title:titleColor:")));

@end

NS_ASSUME_NONNULL_END
