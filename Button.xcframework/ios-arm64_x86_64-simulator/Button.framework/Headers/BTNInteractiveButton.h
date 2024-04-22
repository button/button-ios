@import UIKit;

@class BTNAction;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(InteractiveButton)
@interface BTNInteractiveButton : UIView

- (void)prepareWithButtonAction:(BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:))
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op.");

@property (nonatomic, assign) CGFloat iconSize DEPRECATED_ATTRIBUTE;
@property (nonatomic, assign) CGFloat iconLeftPadding DEPRECATED_ATTRIBUTE;
@property (nonatomic, assign) CGFloat iconLabelSpacing DEPRECATED_ATTRIBUTE;
@property (nonatomic, assign) CGFloat inventoryLeftPadding DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy)   NSString *fontName DEPRECATED_ATTRIBUTE;
@property (nonatomic, assign) NSInteger relativeFontPointSize DEPRECATED_ATTRIBUTE;

@end

#pragma clang diagnostic pop
