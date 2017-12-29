#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "AI.h"
#include "Dealer.h"
#include "Deck.h"

bool playAgain();
std::string start(int *ptr);
void createPlayers(int number, std::vector<AI> *list);

int main() {
	std::string answer;
	int opponents_num;
	std::vector<AI> opponents;
	Dealer dealer;
	std::cout << "\n========== Black Jack ==========\n\n";

	do {
		opponents_num = 0;
		answer = start(&opponents_num);
		Player player(answer);
		createPlayers(opponents_num, &opponents);




	} while (playAgain());

	std::cout << "\nExiting Game.\n";

	system("pause");
	return 0;
}


/*-------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------FUNCTIONS--------------------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------------------------*/

bool playAgain() {
	char answer;
	do {
		std::cout << "\nDo you want to play again? Y/N: ";
		std::cin >> answer;
		switch (answer)
		{
		case 'Y':
		case 'y':
			return true;
		case 'N':
		case 'n':
			return false;
		default:
			std::cout << "\nIncorrect answer. Please enter again.";
		}
	} while (true);
}

std::string start(int *ptr) {
	std::string answer;
	int numOfPlayers;
	std::cout << "\nEnter your name: ";
	std::cin >> answer;
	std::cout << "\nPlay against the dealer and how many other players."
			<< "\nEnter a number from 0 to 5: ";
	std::cin >> *ptr;
	return answer;
}

void createPlayers(int number, std::vector<AI> *list) {
	std::string names[] = {"Nico", "Sarah", "Bill", "Jenny", "Packie"};
	for (int i = 0; i < number; i++) {
		AI enemy(i + 1, names[i]);
		list->push_back(enemy);
	}
}