#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int usermove, compmove;
	int guessLimit=3;
	int yourGuess=0;
	 printf("GUESS THE NUMBER GAME!!!\n");
	 
	 //Generate a random number
	compmove=rand() %101;
	
	
	while(guessLimit>yourGuess){
		printf("Guess the number (its between 0-100), type 101 to exit the game: \n");
		scanf("%d",&usermove);
		
		
		if(usermove==101){
			printf("Exiting the game...");
			exit(1);
		}
		
		if(usermove>100 || usermove=='s' || usermove=='f'|| usermove=='c'){
			printf("input is invalid\n");
			continue;
		}
		
		yourGuess++;
		
		if(usermove>compmove){
			printf("the number is lower TRY AGAIN!!\n");
		}
		else if(usermove< compmove){
			printf("the number is higher TRY AGAIN!!!\n");
		}
		else{
			printf("CONGRATULATIONS!!! You guessed right\n");
			break;
		}
		
		if(yourGuess>=guessLimit){
			printf("Limit reached GAME OVER!!!, the correct number was: %d", compmove);
		}
	}
	return 0;
}
