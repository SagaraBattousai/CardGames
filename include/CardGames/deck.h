#pragma once

#ifdef EXPORT_CARDGAME
#define DECK_API __declspec(dllexport)
#else
#define DECK_API __declspec(dllimport)
#endif


#include <vector>

template<class T>
class Deck
{
public:

	Deck();

  Deck(unsigned size);

  Deck(T cards[], size_t numberOfCards);

	virtual ~Deck();

  virtual void shuffle();

  virtual void cut();

  virtual T draw();

  void discard();

  bool isEmpty();


 private:

  std::vector<T> cards;

  //Do I need to keep track of cards delt?

	

};

#include <random>
#include <chrono>
#include <algorithm>

template <class T>
Deck<T>::Deck()
{}

template <class T>
Deck<T>::Deck(unsigned size) : cards(size)
{}

template <class T>
Deck<T>::Deck(T cards[], size_t numberOfCards) : cards(cards, cards + numberOfCards)
{}

template <class T>
Deck<T>::~Deck()
{}

template <class T>
void Deck<T>::shuffle()
{
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  std::shuffle(cards.begin(), cards.end(), std::default_random_engine(seed));

}

template <class T>
void Deck<T>::cut()
{
  size_t middle = cards.size() / 2;

  for (size_t i = cards.size() - 1; i >= middle; i--)
  {
    T temp = cards.back();
    cards.pop_back();
    cards.insert(cards.begin(), temp);
  }
}

template <class T>
T Deck<T>::draw()
{
  T card = cards.back();
  cards.pop_back();
  return card;
}

template<class T>
void Deck<T>::discard()
{
}

template <class T>
bool Deck<T>::isEmpty()
{
  return cards.empty();
}
