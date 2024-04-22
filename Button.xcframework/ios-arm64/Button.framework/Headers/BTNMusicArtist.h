#import "BTNBaseEntity.h"

/**
 @note Deprecated.
 */

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(MusicArtist)
@interface BTNMusicArtist : BTNBaseEntity

/// Deprecated. Data not collected.
+ (instancetype)artistWithName:(NSString *)name
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
- (void)setGenre:(NSString *)genre 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
