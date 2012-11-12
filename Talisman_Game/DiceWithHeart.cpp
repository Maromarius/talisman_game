#include "DiceWithHeart.h"
#include "Area.h"

const string DiceWithHeart::NAME = "Dice With Heart";
const string DiceWithHeart::DESCRIPTION =	"You Must/n"
											"Roll 2 dice for yourself and 2 for Death. If the Scores are equal: You must Dice with Death again on your next\n"
											"Turn. If your score is lower: You lose 1 life and must Dice with Dice again on your next Turn.\n"
											"If your score is higher: You may move on your next Turn.\n";

DiceWithHeart::DiceWithHeart() : Area(NAME, DESCRIPTION)
{
}

DiceWithHeart::~DiceWithHeart()
{
}