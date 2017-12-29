#include "Deck.h"

char Deck::dealCards() {

}

int Deck::findValue(char card) {
	for (int i = 0; i < 13; i++) {
		if (card == cards[i]) {
			return values[i];
		}
	}
}