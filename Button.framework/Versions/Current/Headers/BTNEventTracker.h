@import Foundation;

@interface BTNEventTracker : NSObject

/**
 Returns the globally shared instance of BTNEventTracker
 @return BTNEventTracker the default event tracker.
 **/
+ (instancetype)eventTracker;


#pragma mark - Event Tracking

/**
 Track an event with the provided name
 @param eventName A string value for the name of the event to track
 **/
- (void)trackEvent:(NSString *)eventName;

/**
 Track an event with the provided name
 @param eventName A string value for the name of the event to track
 @param properties A dictionary of key-value pairs to associate with the event
 **/
- (void)trackEvent:(NSString *)eventName withProperties:(NSDictionary *)properties;

@end