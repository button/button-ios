@import Foundation;
#import "BTNCardCallToAction.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is an abstract class upon which to build concrete card implementations.
 */
@interface BTNCard : NSObject

/**
 The call to action object to be displayed when the card is "active".
 */
@property (nonatomic, strong, readonly) BTNCardCallToAction *cardCTA;


/**
 Designated initializer for concrete subclass usage.

 @param cardCTA The call to action object to be displayed when the card is "active".
 @return returns an instance of a card with a cardCta, or nil if passed nil.
 */
- (instancetype)initWithCallToAction:(BTNCardCallToAction *)cardCTA;
- (instancetype)init __attribute__((unavailable("Use -initWithCallToAction:")));

@end

NS_ASSUME_NONNULL_END
