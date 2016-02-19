#import "BTNModelObject.h"
#import "BTNAppActionMeta.h"
#import "BTNPreview.h"
#import "BTNHeader.h"
#import "BTNGroup.h"
#import "BTNProduct.h"
#import "BTNFooter.h"

/**
 An App Action representations a button (i.e. “preview”) and inventory typically rendered as a “commerce card”.
 */
@interface BTNAppAction : BTNModelObject

/// App action metadata (id, source token, expiry, etc).
@property (nonatomic, copy, readonly) BTNAppActionMeta *meta;


/// The button preview data.
@property (nonatomic, copy, readonly) BTNPreview *preview;


/// Heading information for the inventory.
@property (nonatomic, strong, readonly) BTNHeader *header;


/// Grouped inventory (note: one of `groups` or `product` will be non-nil).
@property (nonatomic, strong, readonly) NSArray <BTNGroup *> *groups;


/// A single product representation (note: one of `groups` or `product` will be non-nil).
@property (nonatomic, strong, readonly) BTNProduct *product;


/// Footer information for the inventory and default action.
@property (nonatomic, strong, readonly) BTNFooter *footer;



///-----------------------
/// @name Invoking Actions
///-----------------------


/**
 Invokes the Button commerce card flow or a preview action if one exists.
 @discussion For integrations that only customize the button preview, call 
 this method when a user taps your custom button preview.
 @see @c -invokeActionForListItem: If you've built out your own custom inventory UI.
 
 @note Users will be sent to the destination application or through the
 Attended Install flow if the destination application is not installed.
 */
- (void)invokePreviewAction;


/**
 Invokes the action of a specific inventory list item.
 @discussion If you've built out your own custom inventory UI, call this 
 method when a user taps a specific inventory item.
 
 @note Users will be sent to the destination application or through the
 Attended Install flow if the destination application is not installed.
 */
- (void)invokeActionForListItem:(BTNListItem *)listItem;


/**
 Invokes the footer action (i.e. default action).
 @discussion If your custom inventory UI includes BTNFooter data, call this
 method when you user taps on your custom footer view.

 @note Users will be sent to the destination application or through the 
 Attended Install flow if the destination application is not installed.
 */
- (void)invokeFooterAction;

@end
