#import "SimpleButtonExampleViewController.h"
#import <Button/Button.h>

@implementation SimpleButtonExampleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    BTNLocation *location = [BTNLocation locationWithName:@"Parm" latitude:40.723027 longitude:-73.9956459];
    BTNContext *context   = [BTNContext contextWithSubjectLocation:location];

    // Replace YOUR_BUTTON_ID with your Button ID from the Button Dashboard https://app.usebutton.com
    self.dropinButton.buttonId = YOUR_BUTTON_ID;
    
    [self.dropinButton prepareWithContext:context completion:^(BOOL isDisplayable) {
        NSLog(@"Displayable: %@", @(isDisplayable));
    }];
}

@end
