@import UIKit;

///----------------------------
/// @name Reminder Context Keys
///----------------------------

/**
 A key for specifying a date/time associated with the context of the screen where
 your BTNDropinButton is rendered. For example, you might set the NSDate representation 
 of an event you're displaying. Doing so will automatically schedule a notification to 
 reminder your user to perform an action at an appropriate time before the event begins.
 
 @note This key is required to enable reminders.
 */
extern NSString * const BTNContextApplicableDateKey;

/**
 A key for specifying the interval (in seconds) prior to your applicable date 
 that you would like to remind the user to perform an action. Without specifying 
 a value for this key, the default of 30m will be used.
 */
extern NSString * const BTNContextReminderIntervalKey;

/**
 A key for specifying an identifier for your reminder. 
 
 @note If you plan to reschedule or cancel reminders when events change, 
 you will need to provide an identifier when preparing the BTNDropinButton.
 */
extern NSString * const BTNContextReminderIdentifierKey;


/**
 This key defines the message displayed to the user when they receive the reminder 
 notification. The default message is contextually aware and is recommended.
 */
extern NSString * const BTNContextReminderMessageKey;

/**
 Specifying a value of @YES for this key will trigger your reminder notification 
 for 15 seconds from the time the BTNDropinButton is tapped. This is useful when
 testing that you have reminders working correctly.
 
 @warning This is for debug use only.
 */
extern NSString * const BTNContextReminderUseDebugIntervalKey;

@interface BTNReminder : NSObject

/**
 Indicates whether a local notification represents a reminder.
 @param notification A local notification to be inspected.
 
 @note This method is made available for convenience but typically not necessary.
 */
+ (BOOL)isReminderNotification:(UILocalNotification *)notification;



///----------------------------
/// @name Cancelling a Reminder
///----------------------------


/**
 Cancels a reminder.
 @param identifier The identifier used to schedule the reminder.
 
 @note In order for a reminder to be cancellable, you must specify a unique identifier for the BTNContextReminderIdentifierKey when providing context to your BTNDropinButton.
 */
+ (void)cancelReminderWithIdentifier:(NSString *)identifier;



///------------------------------
/// @name Rescheduling a Reminder
///------------------------------


/**
 Reschedules the reminder with a new date.
 @param identifier The identifier used to schedule the reminder.
 @param toDate The new date the notification should be triggered.
 
 @note In order for a reminder to be reschedulable, you must specify a unique identifier for the BTNContextReminderIdentifierKey when providing context to your BTNDropinButton.
 */
+ (void)rescheduleReminderWithIdentifier:(NSString *)identifier toDate:(NSDate *)toDate;

@end
