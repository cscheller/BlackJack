#pragma once

#include <string>

class Player
{
private:
	std::string name;
	int total;
	char hand[19];
	/* 
		18 cards max to get 21 for 4 decks; 
		[0] -> holds the number of cards 
	*/


public:
	Player(std::string name);

	std::string getName();
};