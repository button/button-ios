#import "BTNCard.h"

NS_ASSUME_NONNULL_BEGIN

/**
 This is a concrete card class that can display a title and body text.
 */
NS_SWIFT_NAME(TextCard)
@interface BTNTextCard : BTNCard

/**
 The title of the card to be displayed in the card's view.
 */
@property (nullable, nonatomic, readwrite, copy) NSString *title;

/**
 The color with which the title will be displayed.
 @note Defaults to [UIColor whiteColor].
 */
@property (nullable, nonatomic, readwrite, strong) UIColor *titleColor;

/**
 The font with which the title will be displayed.
 @note Defaults to medium weight system font, 17pt.
 */
@property (nullable, nonatomic, readwrite, strong) UIFont *titleFont;

/**
 The body of the card to be displayed in the card's view.
 */
@property (nullable, nonatomic, readwrite, copy) NSString *body;

/**
 The color with which the body will be displayed.
 @note Defaults to [UIColor whiteColor].
 */
@property (nullable, nonatomic, readwrite, strong) UIColor *bodyColor;

/**
 The font with which the body will be displayed.
 @note Defaults to regular weight system font, 14pt.
 */
@property (nullable, nonatomic, readwrite, strong) UIFont *bodyFont;

/**
 The background color of the card view.
 @note Defaults to #0cac56.
 */
@property (nullable, nonatomic, readwrite, strong) UIColor *backgroundColor;

/**
 Creates a new text card.
 
 @param cardCTA The call to action object to be displayed when the card is "active".
 @param title The title of the card.
 @param body The body text of the card.
 @return Returns an instance of a card with the title, bodyText, and cardCTA.
 */

- (instancetype)initWithCallToAction:(BTNCardCallToAction *)cardCTA
                               title:(nullable NSString *)title
                                body:(nullable NSString *)body;

@end

NS_ASSUME_NONNULL_END
