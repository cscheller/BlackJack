#include "AI.h"



AI::AI(int number, std::string name) {
	order = number;
	this->name = name;
	total = 0;
	hand[0] = 0 + '0';
}




std::string AI::getName() { return this->name; }