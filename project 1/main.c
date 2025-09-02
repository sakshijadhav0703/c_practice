#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int numberOfGuesses = 0;
    int guessedNumber;

    do
    {
        printf("Guess the number : ");
        scanf("%d", &guessedNumber);

        if (guessedNumber < randomNumber)
        {
            printf("Higher number please \n");
        }
        else if (guessedNumber > randomNumber)
        {
            printf("Lower number please \n");
        }
        else
        {
            printf("Congratulations! \n");
        }
        numberOfGuesses++;
    } while (guessedNumber != randomNumber);

    printf("You guessed a number in %d guesses", numberOfGuesses);

    return 0;
}