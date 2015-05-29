#import "BTNEventTracker.h"

@interface BTNEventTracker (QuickTrackers)

- (void)trackAction:(NSString *)actionName;

- (void)trackPageView:(NSString *)pageName;

- (void)trackRegistration;

@end
