#pragma once

#ifdef EXPORT_CARDGAME
#define DECK_API __declspec(dllexport)
#else
#define DECK_API __declspec(dllimport)
#endif


#include <vector>
#include "card.h"

class DECK_API Deck
{
public:

  static constexpr int CARDS_IN_A_DECK = 52;
  static constexpr int CARDS_IN_A_SUIT = 13;
  static constexpr int SUITS_IN_A_DECK = 4;
  static constexpr int FACES_IN_A_DECK = 4;
  static constexpr int NUMBER_CARD_MAX = 10;


	Deck();

  Deck(std::vector<Card> cards);

	virtual ~Deck();

  virtual void shuffle();

  virtual void cut();

  virtual Card draw();

  void discard();

  bool isEmpty();


 private:

	void generateSuitDeck(Card::Suit suit);

  std::vector<Card> cards;

  //Do I need to keep track of cards delt?

	

};
