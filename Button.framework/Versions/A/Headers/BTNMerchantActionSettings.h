@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 Settings object is used to customize merchant action flow.
 */
@interface BTNMerchantActionSettings : NSObject

/**
 Unavailable. Use -initWithPresentUnattributedAction: instead.
 @return Returns nil.
 */
- (instancetype)init NS_UNAVAILABLE;


/**
 Initializes a new settings instance.
 @param shouldPresentUnattributedAction Indicates whether Button should present unattributed action to user.
 */
- (instancetype)initWithPresentUnattributedAction:(BOOL)shouldPresentUnattributedAction;


/**
 Indicates whether Button should present unattributed action to user.
 Set YES and Button will present unattributed action in a web view. No-op otherwise.
 */
@property (nonatomic, assign, readonly) BOOL shouldPresentUnattributedAction;

@end

NS_ASSUME_NONNULL_END
