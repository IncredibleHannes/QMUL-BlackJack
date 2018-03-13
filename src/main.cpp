#include <iostream>
#include "Card.h"
#include "Deck.h"


int main(int argc, char const *argv[]) {
  Card c = Card(Face(), Suite());
  Deck d = Deck(c);
  d.shuffle();
  std::cout << "hello world" << std::endl;
  return 0;
}
