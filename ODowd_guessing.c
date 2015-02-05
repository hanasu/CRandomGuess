#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(NULL)); //seed the random number generator
int r = rand() % 100; //bound the random number generator to the range 0-99
int i; //will store the user's guess
int status = 0; //any value but 1 indicates number has not been guessed
int tries = 1; //user's guess attempts

printf("Please make a guess between 0-99. ");
//printf("The random number is: %d\n",r);
scanf("%d", &i); //read the user's initial guess

while (status!=1) { //as long as number has not been guessed
	
	while(i < 0 || i > 99) {
		printf("Please only integer guesses between 0-99. Enter new number: ");
		scanf("%d",&i);
	}

	if(i>r) { //if the user's guess is larger than the random number
   		printf("Your guess is too high. Please enter another number: ");
		scanf("%d",&i);
		tries++;
	}

	else if(i<r) { //if the user's guess is smaller than the random number
   		printf("Your guess is too low. Please enter another number: ");
		scanf("%d",&i);
		tries++;
	}

	else { //if user's guess is not smaller or larger, it must be right
   		printf("Your guess is correct. Congratulations. It took you %d tries to guess the random number.\n",tries);
		status = 1;
	}
}

return 0;
}

