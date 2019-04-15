#include "card.h"

Card::Card(unsigned char value, Suit suit)
  : value(value), 
	  suit(suit), 
	  card(std::to_string(value)),
	  auxValue(value)
{}

Card::Card(unsigned char value, Suit suit, std::string card)
  : value(value),
    suit(suit),
    card(card),
    auxValue(value)
{}

Card::Card(unsigned char value, Suit suit, std::string card, unsigned char auxValue)
  : value(value), 
    suit(suit),
    card(card),
    auxValue(auxValue)
{}

Card::~Card()
{

}

std::string Card::getCard()
{
	return card;
}

unsigned char Card::getValue()
{
	return value;
}

Card::Suit Card::getSuit()
{
	return suit;
}

unsigned char Card::getAuxValue()
{
  return auxValue;
}

std::ostream& operator<<(std::ostream& os, Card card)
{
  os << card.card << " of " << card.suit << 's';

  return os;
}

std::ostream& operator<<(std::ostream& os, Card::Suit suit)
{
	switch (suit)
	{
		case Card::Suit::Spade:   os << "Spade";   break;
		case Card::Suit::Heart:   os << "Heart";   break;
		case Card::Suit::Diamond: os << "Diamond"; break;
		case Card::Suit::Club:    os << "Club";    break;
		default: os.setstate(std::ios_base::failbit);
	}

	return os;
}
