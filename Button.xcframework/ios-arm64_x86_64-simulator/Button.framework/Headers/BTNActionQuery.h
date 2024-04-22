#import "BTNBaseEntity.h"
#import "BTNLocation.h"
#import "BTNMusicArtist.h"
#import "BTNJourney.h"
#import "BTNEvent.h"
#import "BTNItem.h"

/**
 @note Deprecated.
 */

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(ActionQuery)
@interface BTNActionQuery : BTNBaseEntity

/// Deprecated. Data not collected.
+ (instancetype)query
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithUserLocation:(BTNLocation *)userLocation
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithSubjectLocation:(BTNLocation *)subjectLocation
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithArtist:(BTNMusicArtist *)artist
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithJourney:(BTNJourney *)journey
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithEvent:(BTNEvent *)event
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithItem:(BTNItem *)item
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithItems:(NSArray <BTNItem *> *)items
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)queryWithURL:(NSURL *)URL
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
- (void)setUserLocation:(BTNLocation *)userLocation 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setSubjectLocation:(BTNLocation *)subjectLocation 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setDate:(NSDate *)date 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setDateRangeWithStartDate:(NSDate *)startDate endDate:(NSDate *)endDate 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setArtist:(BTNMusicArtist *)artist 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setJourney:(BTNJourney *)journey 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setEvent:(BTNEvent *)event 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)addItems:(NSArray <BTNItem *> *)items 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)addItem:(BTNItem *)item 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setURL:(NSURL *)URL 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)addCustomValue:(id)obj forKey:(NSString *)key 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
