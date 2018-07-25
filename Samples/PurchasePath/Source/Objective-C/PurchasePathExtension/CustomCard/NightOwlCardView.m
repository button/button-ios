#import "NightOwlCardView.h"

@implementation NightOwlCardView

+ (instancetype)nightOwlCardView {
    return (NightOwlCardView *)[[[NSBundle mainBundle] loadNibNamed:NSStringFromClass(self) owner:self options:nil] firstObject];
}

@end
