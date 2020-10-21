@import Foundation;

typedef NS_ENUM(NSUInteger, BTNDropinContentAlignment) {
    BTNDropinContentAlignmentDefault,
    BTNDropinContentAlignmentCenter
};

typedef NS_ENUM(NSUInteger, BTNDropinButtonTextCase) {
    BTNDropinButtonTextCaseDefault,
    BTNDropinButtonTextCaseLower,
    BTNDropinButtonTextCaseUpper
};

DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.")
NS_SWIFT_NAME(DropinButtonAppearance)
@protocol BTNDropinButtonAppearance <NSObject>

@optional
@property (nonatomic, assign) UIEdgeInsets contentInsets UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) BTNDropinContentAlignment contentAlignment UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat cornerRadius UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat borderWidth UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *borderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat iconSize UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat iconLabelSpacing UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIFont *font UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIFont *titleFont UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIFont *subtitleFont UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) BTNDropinButtonTextCase textCase UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) BTNDropinButtonTextCase titleTextCase UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) BTNDropinButtonTextCase subtitleTextCase UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *tintColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *highlightedTintColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *titleTextColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *subtitleTextColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *textColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *highlightedTextColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *normalBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nullable, nonatomic, strong) UIColor *highlightedBackgroundColor UI_APPEARANCE_SELECTOR;

@end
