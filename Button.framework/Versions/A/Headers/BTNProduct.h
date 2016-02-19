#import "BTNModelObject.h"
#import "BTNBackground.h"
#import "BTNImage.h"
#import "BTNText.h"

/**
 BTNProduct objects specify information about rendering a single product.
 */
@interface BTNProduct : BTNModelObject

/// The card background.
@property (nonatomic, copy, readonly) BTNBackground *background;


/// An array of product images.
@property (nonatomic, copy, readonly) NSArray <BTNImage *> *images;


/// The main title text.
@property (nonatomic, copy, readonly) BTNText *titleText;


/// Secondary text representing the item.
@property (nonatomic, copy, readonly) BTNText *subtitleText;


/// A potentially multi-line description text.
@property (nonatomic, copy, readonly) BTNText *descriptionText;

@end
