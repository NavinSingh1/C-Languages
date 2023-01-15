//Project 2: snake, water, gun.
//snake, water, gun or Rock, paper, scissors is a game most of us have played during school time. 
//write a c program capable of playing this game with you.
//your program should be able to print the result after you choose snake/water or gun.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int SnakeWaterGun(char you, char comp){
    //return 1 if you  win, -1 if you lose and 0 if draw.
    //Condition for Draw
    //Cases covered:-
    // ss
    // gg
    // ww
    if(you == comp){
        return 0;
    }
    //Non-draw condition
    //cases covered:-
    // sg
    // gs
    // sw
    // ws
    // gw
    // wg

    if(you == 's' && comp == 'g'){
        return -1;
    }
    else if (you == 'g' && comp == 's'){
        return 1;
    }

    if(you == 's' && comp == 'w'){
        return 1;
    }
    else if (you == 'w' && comp == 's'){
        return -1;
    }

    if(you == 'g' && comp == 'w'){
        return -1;
    }
    else if (you == 'w' && comp == 'g'){
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter s for snake, w for water and g for gun\n");
    scanf("%c", &you);
    int result = SnakeWaterGun(you, comp);
    if(result == 0){
        printf("Game draw\n");
    }
    else if(result == 1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    printf("You choose %c and computer choose %c. ", you, comp);
    return 0;
    getch();
}