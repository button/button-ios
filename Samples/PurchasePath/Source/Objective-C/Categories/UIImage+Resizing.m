#import "UIImage+Resizing.h"
#import <AVFoundation/AVFoundation.h>

@implementation UIImage (Resizing)

- (instancetype)imageWithSize:(CGSize)size {
    if (size.width <= 0.0 || size.height <= 0.0) {
        return nil;
    }
    
    CGRect bounds = CGRectZero;
    bounds.size = size;
    
    CGRect scaled = AVMakeRectWithAspectRatioInsideRect(self.size, bounds);
    scaled.origin = CGPointZero;
    
    UIGraphicsBeginImageContext(scaled.size);
    [self drawInRect:scaled];
    
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

@end
