// project 1 : number guessing game.
//  we will create a program to generate a random number and ask the player to guess it.

// generate random number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, n = 0; // declare variables

    srand(time(0));
    number = rand() % 100 + 1; // generate a number between 1 and 100
    printf("number : %d\n",number);

    // keep running the loop
    printf("Guess the number between 1 to 100\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter a lower number please\n");
        }
        else if (guess < number)
        {
            printf("Enter a higher number please\n");
        }
        else
        {
            printf("You win! Correct guess\n");
            printf("Guessed correctly in %d attempts\n", n);
        }
        n++; // increment attempt count
    } while (guess != number);

    return 0;
}