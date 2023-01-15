/*
     Project-1: Number guessing game
     This is going to be fun!
     We will write a program that generates a random number and asks a player to guess it. If the player guess is higher than the actual number the program displays "Lower number please". Similary if the users guess is to low, the program prints "Higher number please".
     when the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
     Hints:-
     use loops.
     use a random number generator.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //Generate a random number between 1 to 100
    // printf("The number is %d\n", number);
    //keep running the loop until the number is guessed.
    do{
       printf("Guess the number between 1 to 100\n");
       scanf("%d", &guess);
       if(guess>number){
           printf("Lower number please\n");
       }
       else if(guess<number){
           printf("Higher number please\n");
       }
       else{
          printf("You guessed it in %d attempts\n", nguesses);
       }
       nguesses++;
    }while(guess != number);
    return(0);
}