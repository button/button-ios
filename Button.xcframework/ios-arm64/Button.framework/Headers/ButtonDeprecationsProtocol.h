#import "BTNButtonActionsInterfaceProtocol.h"
#import "BTNBoostInterfaceProtocol.h"
#import "BTNOffersInterfaceProtocol.h"

extern NSString * BTNDeprecationErrorDomain;

typedef NS_ENUM(NSInteger, BTNDeprecationError) {
    BTNButtonActionsDeprecationError = 2015,
    BTNButtonBoostDeprecationError = 2019
};

@protocol ButtonDeprecations <NSObject>

///--------------------
/// @name Deprecated — Button Actions
///--------------------

/*
 DEPRECATED since v6.24.0
*/
@property (class, readonly) id <BTNButtonActionsInterface> actions
DEPRECATED_MSG_ATTRIBUTE("Use of this interface results in a no-op. No data is collected.");


///--------------------
/// @name Deprecated — Boost
///--------------------

/**
 DEPRECATED since v6.30.0
 */
@property (class, readonly) id <BTNBoostInterface> boost
DEPRECATED_MSG_ATTRIBUTE("Use of this interface results in a no-op. No data is collected.");


///--------------------
/// @name Deprecated — Personalization
///--------------------

/**
 DEPRECATED since 6.33.0
 */
@property (class, readonly) id <BTNPersonalizationInterface> personalization
DEPRECATED_MSG_ATTRIBUTE("Rename to Button.offers");

@end

