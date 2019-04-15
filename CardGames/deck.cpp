#include "deck.h"
#include <random>
#include <chrono>
#include <algorithm>


Deck::Deck()
{

  generateSuitDeck(Card::Suit::Spade);
  generateSuitDeck(Card::Suit::Heart);
  generateSuitDeck(Card::Suit::Diamond);
  generateSuitDeck(Card::Suit::Club);

}
    
Deck::Deck(std::vector<Card> cards): cards(cards)
{}

Deck::~Deck()
{}

void Deck::shuffle()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  std::shuffle(cards.begin(), cards.end(), std::default_random_engine(seed));

}

void Deck::cut()
{
  size_t middle = cards.size() / 2;

  for (size_t i = cards.size() - 1; i >= middle; i--)
  {
    Card temp = cards.back();
    cards.pop_back();
    cards.insert(cards.begin(), temp);
  }
}

Card Deck::draw()
{
  Card card = cards.back();
  cards.pop_back();
  return card;
}

bool Deck::isEmpty()
{
  return cards.empty();
}

void Deck::generateSuitDeck(Card::Suit suit)
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