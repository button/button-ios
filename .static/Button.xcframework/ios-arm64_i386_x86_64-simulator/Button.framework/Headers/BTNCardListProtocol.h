@import Foundation;

@class BTNCard;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(CardList)
@protocol BTNCardList <NSObject>

/**
 The list of cards currently added to the card system, in the order they can
 be displayed to the user.
 
 @return An array of cards currently added to the card list.
 */
- (NSArray <BTNCard *> *)cards;


/**
 Sets the cards to be maintained by the card list.
 
 @param cards The array of cards.
 */
- (void)setCards:(NSArray <BTNCard *> *)cards;


/**
 Appends a card to the end of the current list of cards in the card system.
 
 @param card The card to be added.
 */
- (void)addCard:(BTNCard *)card;


/**
 Inserts a card into the current list of cards in the card system at a specific index.
 
 @param card The card to be added.
 @param index The location in the current list of cards to insert the card.
 */
- (void)insertCard:(BTNCard *)card atIndex:(NSUInteger)index;


/**
 Returns the card in the current card system that matches the given key.
 @discussion Keys are meant to be unique. If multiple cards match the given key,
 the first in the list that matches will be returned.
 
 @param key The key of the card to be returned.
 @return The card in the current card system that matches the given key.
 */
- (nullable BTNCard *)cardForKey:(id <NSObject>)key;


/**
 Replaces the card in the current card system that matches the given key with a new card.
 @discussion Keys are meant to be unique. If multiple cards match the given key, the
 first in the list that matches will be replaced. If no cards match, no replacement will occur.
 
 @param key The key of the card to be replaced.
 */
- (void)replaceCardForKey:(id <NSObject>)key withCard:(nullable BTNCard *)card;


/**
 Removes the card in the current card system that matches the given key.
 @discussion Keys are meant to be unique. If multiple cards match the given key, the
 first in the list that matches will be removed.
 
 @param key The key of the card to be removed.
 */
- (void)removeCardForKey:(id <NSObject>)key;


/**
 Removes all cards in the current card system.
 */
- (void)removeAllCards;


@end

NS_ASSUME_NONNULL_END
