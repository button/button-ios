@import Foundation;

NS_SWIFT_NAME(DebugInterface)
@protocol BTNDebugInterface <NSObject>
@required

@property (nonatomic, assign, getter=isLoggingEnabled) BOOL loggingEnabled;

@property (nonatomic, assign, getter=isVisualDebuggingEnabled) BOOL visualDebuggingEnabled;

@end


