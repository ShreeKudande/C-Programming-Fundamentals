// Snake, water, gun or rock, paper, scissors is a game most of us have played during school time. (I sometimes play it even now). Write a C program capable of playing this game with you. Your program should be able to print the result after you choose snake/water or gun.

/*
Snake --> 0
Water --> 1
Gun --> 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int Player, Computer = rand() % 3;

    printf("Choose 0 for Snake, 1 for Water & 2 for Gun \n");
    printf("Enter : ");
    scanf("%d", &Player);
    if (Player > 2 || Player < 0)
    {
        printf("You Entered the wrong value!\n");
        return 0;
    }

    printf("Computer Choose : %d\n", Computer);

    if (Player == Computer)
    {
        printf("Its's a Draw!\n");
    }
    else if (Player == 0 && Computer == 1)
    {
        printf("You Win!\n");
    }
    else if (Player == 1 && Computer == 2)
    {
        printf("You Win!\n");
    }
    else if (Player == 2 && Computer == 0)
    {
        printf("You Win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }

    return 0;
}
