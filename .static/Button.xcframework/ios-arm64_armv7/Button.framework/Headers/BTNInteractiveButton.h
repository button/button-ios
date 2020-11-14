@import UIKit;

@class BTNAction;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

NS_SWIFT_NAME(InteractiveButton)
@interface BTNInteractiveButton : UIView

- (void)prepareWithButtonAction:(BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:))
DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.");

@property (nonatomic, assign) CGFloat iconSize;
@property (nonatomic, assign) CGFloat iconLeftPadding;
@property (nonatomic, assign) CGFloat iconLabelSpacing;
@property (nonatomic, assign) CGFloat inventoryLeftPadding;
@property (nonatomic, copy)   NSString *fontName;
@property (nonatomic, assign) NSInteger relativeFontPointSize;

@end

#pragma clang diagnostic pop
