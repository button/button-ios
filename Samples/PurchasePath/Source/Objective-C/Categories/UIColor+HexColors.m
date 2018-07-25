#import "UIColor+HexColors.h"

@implementation UIColor (HexColors)

+ (instancetype)colorWithHex:(NSInteger)hex {
    CGFloat red = ((hex >> 16) & 0xFF) / 255.0;
    CGFloat green = ((hex >> 8) & 0xFF) / 255.0;
    CGFloat blue = (hex & 0xFF) / 255.0;
    return [self colorWithRed:red green:green blue:blue alpha:1.0];
}

@end
