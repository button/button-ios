#import "SimpleButtonExampleViewController.h"
#import <Button/Button.h>

@implementation SimpleButtonExampleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    BTNVenue *venue = [BTNVenue venueWithId:@"abc123"
                                  venueName:@"Parm"
                                   latitude:40.723027
                                  longitude:-73.9956459];
    
    [self.dropinButton prepareForDisplayWithContext:@{ BTNContextEndLocationKey: venue.location } completion:^(BOOL isDisplayable) {
        NSLog(@"Displayable: %@", @(isDisplayable));
    }];
}

@end