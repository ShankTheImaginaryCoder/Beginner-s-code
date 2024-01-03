#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    //genrating number
    int number=rand()%101;
    //according to number generated, deciding the computer's move
    char comp_choice;
    if(number<=33)       //if number less than equal to 33, it's rock
    comp_choice='R';
    else if(number>33&&number <=66)       // if number is greater than 33 and less than equal to 66, it's paper
    comp_choice='P';
    else              //if number is greater than 66, it's scissor
    comp_choice='S';
    printf("Computer has made its move, now its your turn\nPress R for Rock\nS for Scissor\nP for Paper\n");
    char choice;
    //user's move
    scanf("%c",&choice);
    if(choice==comp_choice)
    printf("It's a tie\n");
    //conditions when computer wins
    else if((choice=='R'&&comp_choice=='P')||(choice=='P'&&comp_choice=='S')||(choice=='S'&&comp_choice=='R'))
    printf("Oh No! You lost\n");
    else
    printf("Hurray, You Win\n");
    printf("Your's move: %c\nComputer's move: %c", choice,comp_choice);
}
