#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/**
 Location manager completion handler.
 @param location The current device location.
 @param error An error if one occurred while locating the device.
 @discussion If location services is unable to get a location within the accuracy threshold, 
 `location` will be the last known device location.
 */
typedef void(^BTNLocationManagerCompletionHandler)(CLLocation *location, NSError *error);


@interface BTNLocationManager : NSObject <CLLocationManagerDelegate>


///---------------
/// @name Accuracy
///---------------


/**
 Allowable threshold of timestamp change between the last known location and new location. Default is 10 minutes.
 @discussion Location manager will wait for updates while the last known location is stale until timeout.
 */
@property (nonatomic, assign) NSTimeInterval locationStalenessThreshold;


/**
 The amount of time in seconds to wait for a ‘fresh’ location to be delivered. Default is 3 seconds.
 @discussion If the process times out, the last known location will be delivered.
 */
@property (nonatomic, assign) NSTimeInterval locationUpdateTimeout;



///-----------------
/// @name Permission
///-----------------

/**
 Sets whether the Button SDK is allowed to request location permission.
 @param isAllowed A boolean indicating whether requesting permission is allowed.
 @discussion The default value is NO.
 */
+ (void)allowButtonToRequestLocationPermission:(BOOL)isAllowed;


/**
 Indicates whether location permission has ever been requested.
 @return YES if location permission has been requested, otherwise NO.
 */
+ (BOOL)isPermissionRequested;


/**
 Indicates whether location permission has been granted.
 @return YES if location permission has been granted, otherwise NO.
 */
+ (BOOL)isPermissionGranted;


/**
 Indicates whether location permission has been explicitly denied.
 @return YES if permission has been requested and not granted.
 */
+ (BOOL)isPermissionDenied;



///---------------
/// @name Locating
///---------------


/**
 Attempt to locate the device if location services are enabled.
 @param completionHandler A block to be executed upon receiving a location with the desired accuracy.
 @discussion If the application has previously requested location permission and is permitted to access the deivce location, 
 location manager will attempt to locate the device. If the device location does not meet the accuracy threshold before the timeout
 or an error occurs, the last known location will be passed to the completion handler if available.
 */
- (void)locateDeviceWithCompletion:(BTNLocationManagerCompletionHandler)completionHandler;

@end
