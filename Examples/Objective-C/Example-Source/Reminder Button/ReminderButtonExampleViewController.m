#import "ReminderButtonExampleViewController.h"
#import <Button/Button.h>

@implementation ReminderButtonExampleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Reminder option will not appear unless permission has been granted.
    [self requestLocalNotificationPermission];
    
    BTNVenue *venue = [BTNVenue venueWithId:@"abc123"
                                  venueName:@"Parm"
                                   latitude:40.723027
                                  longitude:-73.9956459];
    
    NSDate *futureDate = [NSDate dateWithTimeIntervalSinceNow:10000];
    
    NSDictionary *context = @{ BTNContextEndLocationKey: venue.location,
                               BTNContextApplicableDateKey: futureDate,
                               BTNContextReminderIdentifierKey: venue.venueId,
                               BTNContextReminderUseDebugIntervalKey: @YES };
    
#error Replace YOUR_BUTTON_ID with your Button ID from the Button Dashboard https://app.usebutton.com
    self.dropinButton.buttonId = @"YOUR_BUTTON_ID";
    
    [self.dropinButton prepareForDisplayWithContext:context completion:^(BOOL isDisplayable) {
        NSLog(@"Displayable: %@", @(isDisplayable));
    }];
}


- (void)requestLocalNotificationPermission {
    UIUserNotificationType types = UIUserNotificationTypeBadge | UIUserNotificationTypeSound | UIUserNotificationTypeAlert;
    UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:types categories:nil];
    [[UIApplication sharedApplication] registerUserNotificationSettings:settings];
}

@end
