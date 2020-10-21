#import "BTNBaseEntity.h"
#import "BTNLocation.h"
#import "BTNMusicArtist.h"
#import "BTNJourney.h"
#import "BTNEvent.h"
#import "BTNItem.h"

/**
 All fields are optional and should be populated only if known.
 @see `BTNBaseEntity` for inherited configuration options.
 @warning Using the same query instance for multiple fetches is not recommended and unexpected results may occur. Please use a new instance for each fetch.
 */

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ActionQuery)
@interface BTNActionQuery : BTNBaseEntity

///--------------------
/// @name Initilization
///--------------------

/**
 Returns a newly instantiated query object.
 */
+ (instancetype)query;


/**
 Returns a newly instantiated query object with a userLocation.
 @param userLocation the current location of the user.
 @see -setUserLocation for more info.
 */
+ (instancetype)queryWithUserLocation:(BTNLocation *)userLocation;


/**
 Returns a newly instantiated query object with a subject location.
 @param subjectLocation a location subject for the current user context.
 @see -setSubjectLocation: for more info.
 */
+ (instancetype)queryWithSubjectLocation:(BTNLocation *)subjectLocation;


/**
 Returns a newly instantiated query object with an artist.
 @param artist a music artist associated with the current user context.
 @see -setArtist: for more info.
 */
+ (instancetype)queryWithArtist:(BTNMusicArtist *)artist;


/**
 Returns a newly instantiated query object with a journey.
 @param journey a journey object which is relevant to the current user context.
 @see -setJourney: for more info.
 */
+ (instancetype)queryWithJourney:(BTNJourney *)journey;


/**
 Returns a newly instantiated query object with an event.
 @param event an event object which is relevant to the current user context.
 @see -setEvent: for more info.
 */
+ (instancetype)queryWithEvent:(BTNEvent *)event;



/**
 Returns a newly instantiated query object with a single item.
 @param item An item that is the subject of the page.
 @see -addItems: for more info.
 */
+ (instancetype)queryWithItem:(BTNItem *)item;


/**
 Returns a newly instantiated query object with an array of items.
 @param items one or more items that are the subject of the page.
 @see -addItems: for more info.
 */
+ (instancetype)queryWithItems:(NSArray <BTNItem *> *)items;


/**
 Returns a newly instantiated query object with a URL.
 @param URL a URL that specifies the current user context.
 @see -setURL: for more info.
 */
+ (instancetype)queryWithURL:(NSURL *)URL;



///-----------------------------
/// @name Adding Additional Data
///-----------------------------

/**
 Sets the current location of the user.
 @note Provide whatever level of granularity makes sense for the context / that you have access to.
 */
- (void)setUserLocation:(BTNLocation *)userLocation;


/**
 Sets a location subject for the current activity or content.
 Example: A restaurant on a venue page, point on a map or city in a travel app
 @note Provide whatever level of granularity makes sense for the context.
 @see `BTNLocation` for details of all the different ways of expressing a location.
 */
- (void)setSubjectLocation:(BTNLocation *)subjectLocation;


/**
 Sets a relevant date for the user’s query.
 Example: The time of a reservation, date of a hotel reservation etc..
 @note If date is not relevant, do not provide it.
 */
- (void)setDate:(NSDate *)date;


/**
 Sets a date range when the current query represents a discrete period of time with a beginning and an end.
 Example: a return flight, movie showing, sporting event etc..
 */
- (void)setDateRangeWithStartDate:(NSDate *)startDate endDate:(NSDate *)endDate;


/**
 Sets a music artist associated with the current query.
 @see `BTNMusicArtist` query object for details.
 */
- (void)setArtist:(BTNMusicArtist *)artist;


/**
 Sets a journey object which is relevant to the current user query.
 @note Specify a `BTNJourney` only when the current query represents a journey.
 Example: itinerary for a flight, bus, train, interstellar travel etc..
 */
- (void)setJourney:(BTNJourney *)journey;


/**
 Sets an event object which is relevant to the current user query.
 Example: A concert, art show, conference etc..
 */
- (void)setEvent:(BTNEvent *)event;


/**
 Add one or more items that are the subject of the page.
 Example: a book, iPad etc..
 */
- (void)addItems:(NSArray <BTNItem *> *)items;
- (void)addItem:(BTNItem *)item;


/**
 Sets a URL that specifies the current user context.
 This can either be a Universal Links representation of the page or URL of the canonical crawlable web page.
 */
- (void)setURL:(NSURL *)URL;



///--------------------
/// @name Custom Values
///--------------------

/**
 Add custom key-value pairs to further define the current user query.
 @note you can also use object subscripting (e.g. object[key] = value) @see BTNSubscriptable
 */
- (void)addCustomValue:(id)obj forKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
