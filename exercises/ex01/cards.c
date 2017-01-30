#include <stdio.h>
#include <stdlib.h>

int card_value(char* card_name){
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
	if ((val > 2) && (val < 7)){
		count ++;
	} else if (val == 10) {
		count --;
	}
	return count;
}

int main()
{
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