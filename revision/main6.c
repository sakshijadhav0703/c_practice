#include <stdio.h>

int main() {
    int marks1;
    int marks2;
    int marks3;

    printf("Enter marks1 : ");
    scanf("%d" , &marks1);

    printf("Enter marks2 : ");
    scanf("%d" , &marks2);

    printf("Enter marks3 : ");
    scanf("%d" , &marks3);

    // if(marks1 <= 40 && marks1 >= 33) {
    //     printf("You passed");
    // } else if (marks2 <= 40 && marks2 >= 33) {
    //     printf("You passed");
    // } else if (marks3 <= 40 && marks3 >= 33) {
    //     printf("You passed");
    // } else {
    //     printf("You failed");
    // }

    if(marks1 < 33 || marks2 < 33 || marks3 <33) {
        printf("You failed because you got less than 33 marks in individual subject");

    } else if ( (marks1 + marks2 + marks3 / 3 )< 40){
        printf("You failed because your average score is less than 40");

    } else {
        printf("You passed");
    }
    return 0;
}