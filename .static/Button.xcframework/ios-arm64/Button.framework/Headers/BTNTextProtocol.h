@import Foundation;

@protocol BTNText <NSObject>

@required

/**
 The copy displayed to the user.
 */
@property (nullable, nonatomic, copy) NSString *text;

/**
 The text color displayed to the user.
 */
@property (nullable, nonatomic, copy) UIColor *color;

@end
