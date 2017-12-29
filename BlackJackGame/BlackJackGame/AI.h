#pragma once

#include <string>

class AI
{

private:
	int order, total;
	std::string name;
	char hand[19];

public:
	AI(int number, std::string name);


	std::string getName();
};
