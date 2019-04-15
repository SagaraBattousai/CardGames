#include "faceCard.h"

FaceCard::FaceCard(unsigned char value, Suit suit, std::string card) : Card(value, suit), card(card), auxValue(0)
{
}

FaceCard::FaceCard(unsigned char value, Suit suit, std::string card, unsigned char auxValue) : Card(value, suit), card(card), auxValue(auxValue)
{
}

std::string FaceCard::getCard()
{
	return card;

}

unsigned char FaceCard::getAuxValue()
{
	return auxValue;
}