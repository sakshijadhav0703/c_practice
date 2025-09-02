#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userChoice , compChoice;
    char *choices[] = {"stone" , "paper" , "scissor"};

    srand(time(0));

    printf("WELCOME! \n");
    printf("Enter your moves from 1.stone   2.paper  3.scissor \n");

    printf("Enter userChoice : ");
    scanf("%d" , &userChoice); 

    if( userChoice < 1 || userChoice > 3) {
        printf("Invalid number , choose from 1 to 3");
    }

    compChoice =(rand() % 3) + 1;

    printf("computer choose : %d \n" , compChoice);

    

    if(userChoice == compChoice) {
        printf("The game is draw");
    } else if (( userChoice == 1 && compChoice == 3) || (userChoice == 2 && compChoice == 1 || (userChoice == 3 && compChoice ==2))) {
        printf("You win");
    } else {
        printf("Computer win");
    }

    return 0;
}
