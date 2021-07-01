#import "BTNButtonActionsInterfaceProtocol.h"

@protocol ButtonDeprecations <NSObject>

///--------------------
/// @name Deprecated — Button Actions
///--------------------

/*
 DEPRECATED since v6.24.0
*/
@property (class, readonly) id <BTNButtonActionsInterface> actions
DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.");


///--------------------
/// @name Deprecated — Boost
///--------------------

/**
 DEPRECATED since v6.30.0
 */
@property (class, readonly) id <BTNBoostInterface> boost
DEPRECATED_MSG_ATTRIBUTE("Boost has been deprecated and will be removed in a future version.");

@end

