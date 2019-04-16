#include "deckFactory.h"

DeckFactory<Card>::DeckFactory()
{}

Deck<Card> DeckFactory<Card>::create()
{
  std::vector<Card> cards;

  generateSuitDeck(cards, Card::Suit::Spade);
  generateSuitDeck(cards, Card::Suit::Heart);
  generateSuitDeck(cards, Card::Suit::Diamond);
  generateSuitDeck(cards, Card::Suit::Club);

  return Deck<Card>(cards.data(), cards.size());

}

void DeckFactory<Card>::generateSuitDeck(std::vector<Card>& cards, Card::Suit suit)
{
  for (int i = 2; i <= NUMBER_CARD_MAX; i++)
  {
    cards.push_back(Card(i, suit));
  }

  cards.push_back(Card(NUMBER_CARD_MAX, suit, "Jack"));
  cards.push_back(Card(NUMBER_CARD_MAX, suit, "Queen"));
  cards.push_back(Card(NUMBER_CARD_MAX, suit, "King"));
  cards.push_back(Card(1, suit, "Ace", 11));
}
