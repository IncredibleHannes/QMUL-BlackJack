/**
 *
 */

#ifndef BLACKJACKCARD_H
#define BLACKJACKCARD_H

#include "Card.h"

enum face {Ace, Two, Three, Four, Five, Six, Seven, Eigth, Nine, Ten, Jack, Queen, King};
enum suite {Diamond, Heart, Spade, Club};

class BlackJackCard : Card<face, suite> {
  
};
#endif
