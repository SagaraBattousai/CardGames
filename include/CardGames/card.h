#pragma once

#ifdef EXPORT_CARDGAME
#define CARD_API __declspec(dllexport)
#else
#define CARD_API __declspec(dllimport)
#endif

#include <string>
#include <ostream>


class CARD_API Card {

public:
	
	enum class Suit : char { Spade = 'S', Heart = 'H', Diamond = 'D', Club = 'C' };

	Card(unsigned char value, Suit suit);

  Card(unsigned char value, Suit suit, std::string card);

	Card(unsigned char value, Suit suit, std::string card, unsigned char auxValue);

	virtual ~Card();

	std::string getCard();

	unsigned char getValue();

	Suit getSuit();

  unsigned char getAuxValue();

  CARD_API friend std::ostream& operator<<(std::ostream& os, Card card);

  CARD_API friend std::ostream& operator<<(std::ostream& os, Card::Suit suit);

private:
	
	unsigned char value;

	Suit suit;

	std::string card;

	unsigned char auxValue;
};