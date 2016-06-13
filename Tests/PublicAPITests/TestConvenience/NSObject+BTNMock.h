@import Foundation;

@interface NSObject (BTNMock)

/**
 Returns a shared instance of a class mock of `self`.
 */
+ (id)sharedMock;


/**
 Stops mocking the `sharedMock`.
 @note No need to maintain a reference to your mock.
 Simply call `[Class stopMocking]` to stop mocking a class.
 */
+ (void)stopMocking;

@end
