/*
Project 1 :-
We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”.When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number. Hint: Use loop & use a random number generator
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Initialize random number generator
     srand(time(0));

    //Generate random number between 1 and 100
     int randomNumber = (rand() % 100) + 1;

    //Print the random Number
    // printf("Random Number: %d\n", randomNumber);

    int user;
    printf("Guess the Number:\n");

    int no_of_guesses = 0;

    while (user!=randomNumber)
    {
        scanf("%d", &user);
        if (randomNumber>user)
        {
            printf("Higher number please!\n");
        }
        else if (randomNumber<user)
        {
            printf("Lower number please!\n");
        }
        no_of_guesses++;
    }
    printf("You Won! the correct number is %d and it took %d guesses", user, no_of_guesses);

     return 0;
}
