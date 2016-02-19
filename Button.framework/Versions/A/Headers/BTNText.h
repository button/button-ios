#import "BTNModelObject.h"
@import UIKit;

/**
 BTNText represent text and how it should be rendered.
 */
@interface BTNText : BTNModelObject

/// A string of text.
@property (nonatomic, copy, readonly) NSString *text;


/// The color for rendering the associated `text'.
@property (nonatomic, copy, readonly) NSString *color;

@end
