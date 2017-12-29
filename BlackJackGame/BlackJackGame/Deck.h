#pragma once

#include <string>

class Deck {
private:
	char cards[13] = {'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
	int values[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
	int count[13] = { 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16 };

public:
	char dealCards();
	int findValue(char card);

};



