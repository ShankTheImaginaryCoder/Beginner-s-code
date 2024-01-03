#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int number=rand()%101;
    char comp_choice;
    printf("Computer has made its move, now its your turn\nPress R for Rock\nS for Scissor\nP for Paper\n");
    char choice;
    scanf("%c",&choice);
    if(number<=33)
    comp_choice='R';
    else if(number>33&&number <=66)
    comp_choice='P';
    else 
    comp_choice='S';
    if(choice==comp_choice)
    printf("It's a tie\n");
    else if((choice=='R'&&comp_choice=='P')||(choice=='P'&&comp_choice=='S')||(choice=='S'&&comp_choice=='R'))
    printf("Oh No! You lost\n");
    else
    printf("Hurray, You Win\n");
    printf("Your's move: %c\nComputer's move: %c", choice,comp_choice);
}