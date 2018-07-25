#import <UIKit/UIKit.h>

@interface NightOwlCardView : UIView

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *bodyLabel;
@property (weak, nonatomic) IBOutlet UIButton *actionButton;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

+ (instancetype)nightOwlCardView;

@end
