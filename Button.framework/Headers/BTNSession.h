#import "BTNModelObject.h"
@class BTNCustomer;

@interface BTNSession : BTNModelObject

@property (nonatomic, strong) NSString    *sessionId;
@property (nonatomic, strong) BTNCustomer *customer;

/// An optional sourceToken returned from a session. This is transient.
@property (nonatomic, strong) NSString    *sourceToken;

///---------------
/// @name Equality
///---------------

/**
 Returns a Boolean value that indicates whether a given BTNSession is equal to the receiver.
 @param session The BTNSession with which to compare to the receiver.
 @return YES if the BTNSession is equivalent to the receiver.
 */
- (BOOL)isEqualToSession:(BTNSession *)session;

@end
