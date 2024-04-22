@import Foundation;

#import "BTNAction.h"
#import "BTNActionQuery.h"
#import "BTNActionRequest.h"
#import "BTNDropinButton.h"
#import "BTNDropinButtonCell.h"
#import "BTNInteractiveButton.h"

NS_ASSUME_NONNULL_BEGIN

@class BTNActionRequest, BTNAction;

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(ButtonActionsInterface)
@protocol BTNButtonActionsInterface

@required

- (void)fetchWithRequest:(BTNActionRequest *)request
           actionHandler:(void(^)(BTNAction * __nullable buttonAction, NSError * __nullable error))actionHandler NS_SWIFT_NAME(fetch(request:completion:)) 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END

