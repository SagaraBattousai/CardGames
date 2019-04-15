#pragma once

#include "card.h"

class FaceCard : public Card
{
public:

	FaceCard(unsigned char value, Suit suit, std::string card);

	FaceCard(unsigned char value, Suit suit, std::string card, unsigned char auxValue);

	//virtual ~FaceCard();

	virtual std::string getCard() override;

	unsigned char getAuxValue();



private:

	/*unsigned char value;

	char suit;*/

	std::string card;

	unsigned char auxValue;

};