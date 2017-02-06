#include <stdio.h>
#include <stdlib.h>

int card_value(char* card_name){
	/* card_value: Decide what value a card has
	 *             in a card counting system.
	 * card_name: The input given by the user
	 */
	int val = -1;
	switch(card_name[0]){
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			break;
		default:
			val = atoi(card_name);
			if ((val < 1) || (val > 10)){
				break;
			}
	}
	return val;
}

int increment_count(int val, int count){
	/* increment_count: Given a card value, determine
	 *             what happens to the count in a card
	 *             counting system
	 * val: The value of the card
	 * count: The current count
	 * returns: The count after the value has been used
	 */
	if ((val > 2) && (val < 7)){
		count ++;
	} else if (val == 10) {
		count --;
	}
	return count;
}

int main() {
	/*  repeatedly takes in user input (playing card values)
		and keeps track of the count for a game of
		blackjack 
	*/
	char card_name[3];
	int count = 0;
	int val;
	while (card_name[0] != 'x') {
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		val = card_value(card_name);
		if (val == -1){
			puts("I don't understand that value!");
		}
		increment_count(val, count);
		printf("Current count: %i\n", count);
	}
	return 0;
}