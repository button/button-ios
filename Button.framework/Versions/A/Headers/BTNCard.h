@import UIKit;
#import "BTNCardCallToAction.h"

@protocol BTNBrowserInterface;

NS_ASSUME_NONNULL_BEGIN

/**
 This is an abstract class upon which to build concrete card implementations.
 */
NS_SWIFT_NAME(Card)
@interface BTNCard : NSObject

/**
 A reference to the browser interface.
 
 @discussion Use this, for example, to make any changes to the top or bottom bars,
 add, update, or remove cards when a user interacts with a card instance.
 
 @seealso BTNBrowserInterface
 */
@property (nullable, nonatomic, readonly, weak) id <BTNBrowserInterface> browser;


/**
 The view instance currently associated with this card.

 @Discussion Returns a non-nil value when a card instance has an associated
 view representing it. Use this to make any updates to your view,
 for example, when a user intracts with the view.
 */
@property (nullable, nonatomic, readonly, weak) UIView *view;


/**
 The call to action object to be displayed when the card is "active".
 */
@property (nonatomic, readonly, strong) BTNCardCallToAction *cardCTA;


/**
 An object that implements the isEqual: method of the NSObject protocol.
 This can be used to identify a card, and is meant to be unique.
 */
@property (nonatomic, readwrite, strong) id <NSObject> key;


/**
 Designated initializer for concrete subclass usage.

 @param cardCTA The call to action object to be displayed when the card is "active".
 @return returns an instance of a card with a cardCta, or nil if passed nil.
 */
- (instancetype)initWithCallToAction:(BTNCardCallToAction *)cardCTA;


/**
 Called when a card instance needs a view for displaying on screen.
 Subclasses must override this method and return a new view instance.
 @seealso -prepareView:
 */
+ (UIView *)createView;


/**
 Called just before the card's view is displayed on screen.
 @discussion Subclasses must override this method to prepare the passed
 card view for display. The passed view will be an instance of the view
 returned from +createView
 @seealso +createView
 */
- (void)prepareView:(UIView *)cardView;

@end

NS_ASSUME_NONNULL_END
