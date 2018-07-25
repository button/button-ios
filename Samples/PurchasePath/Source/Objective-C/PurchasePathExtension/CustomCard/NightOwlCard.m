#import "NightOwlCard.h"
#import "NightOwlCardView.h"
#import "UIColor+HexColors.h"

static NSString * const NightOwlCardRedeemedImageURLString = @"https://developer.usebutton.com/assets/guides/publishers/checkout-extensions/custom-cards/img_owl-redeemed.png";

@interface NightOwlCard ()

@property (nonatomic, assign) BOOL isRedeemed;
@property (nonatomic, strong) UIImage *redeemedImage;

@end

@implementation NightOwlCard

+ (UIView *)createView {
    return [NightOwlCardView nightOwlCardView];
}

- (void)prepareView:(UIView *)cardView {
    NightOwlCardView *view = (NightOwlCardView *)cardView;
    view.titleLabel.text = @"Night Owl Bonus +1%";
    view.bodyLabel.text = @"Whoooo's up late shopping? Here's an extra 1% cash back when you shop now before 6 AM.";
    view.actionButton.layer.cornerRadius = 4.0;
    [view.actionButton setTitle:@"Tap to Hoot" forState:UIControlStateNormal];
    [view.actionButton addTarget:self action:@selector(redeemAction:) forControlEvents:UIControlEventTouchUpInside];
    [self updateView:view];
}

- (void)updateView:(NightOwlCardView *)view {
    view.actionButton.userInteractionEnabled = !_isRedeemed;
    
    
    if (_isRedeemed) {
        view.actionButton.backgroundColor = [UIColor colorWithHex:0x0CAC56];
        [view.actionButton setTitle:@"Offer Redeemed" forState:UIControlStateNormal];
        view.imageView.image = _redeemedImage;
    }
    else {
        view.actionButton.backgroundColor = [UIColor colorWithHex:0x1b84ff];
        [view.actionButton setTitle:@"Tap to Hoot" forState:UIControlStateNormal];
        view.imageView.image = [UIImage imageNamed:@"nightowl"];
    }
}

- (void)redeemAction:(UIButton *)sender {
    NightOwlCardView *view = (NightOwlCardView *)self.view;
    NSError *error = nil;
    NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:NightOwlCardRedeemedImageURLString] options:0 error:&error];
    if (error) {
        NSLog(@"error downloading image: %@", error.localizedDescription);
        return;
    }
    _redeemedImage = [UIImage imageWithData:data scale:[[UIScreen mainScreen] scale]];
    _isRedeemed = YES;
    [self updateView:view];
}

@end
