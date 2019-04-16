#pragma once

#ifdef EXPORT_CARDGAME
#define DECK_FACTORY_API __declspec(dllexport)
#else
#define DECK_FACTORY_API __declspec(dllimport)
#endif

#include "deck.h"
#include "card.h"

template<class T>
class DeckFactory
{
public:

  static Deck<T> create();

  virtual ~DeckFactory() = 0;

 };

template <>
class DECK_FACTORY_API DeckFactory<Card>
{

public:

  static constexpr int CARDS_IN_A_DECK = 52;
  static constexpr int CARDS_IN_A_SUIT = 13;
  static constexpr int SUITS_IN_A_DECK = 4;
  static constexpr int FACES_IN_A_DECK = 4;
  static constexpr int NUMBER_CARD_MAX = 10;

  static Deck<Card> create();

private:
  static void generateSuitDeck(std::vector<Card>& cards, Card::Suit suit);

};

