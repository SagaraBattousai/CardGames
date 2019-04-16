#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"
#include "deckFactory.h"


int main(void)
{

  Deck<Card> deck = DeckFactory<Card>().create();

  deck.shuffle();

  deck.cut();

  deck.shuffle();

  Card card = deck.draw();
  Card card2 = deck.draw();
  Card card3 = deck.draw();

  std::cout << card << std::endl << card2 << std::endl << card3 << std::endl;

	return 0;
	
}