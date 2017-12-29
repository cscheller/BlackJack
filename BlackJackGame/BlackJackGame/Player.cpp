#include "Player.h"


Player::Player(std::string name) {
	this->name = name;
	total = 0;
	hand[0] = 0 + '0';
}


std::string Player::getName() { return this->name; }