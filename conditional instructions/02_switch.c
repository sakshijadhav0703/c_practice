#include <stdio.h>

int main()
{

    // int a;
    // printf("Enter the Number\n");
    // scanf("%d", &a);

    // switch (a)
    // {
    // case 1:
    //     printf("You entered 1\n");
    //     break;
    // case 2:
    //     printf("You entered 2\n");
    //     break;
    // case 3:
    //     printf("You entered 3\n");
    //     break;
    // case 4:
    //     printf("You entered 4\n");
    //     break;
    // default:
    //     printf("Nothing matched");
    //     break;
    // }


    char grade;
    int marks;

    printf("Enter Marks : ");
    scanf("%d" ,&marks);
    
    if(marks<=100 && marks>=90) {
        grade = 'A';
        printf("A");
    } else if (marks<=90 && marks>=80) {
        grade = 'B';
         printf("%c" , grade);
    } else if (marks<=80 && marks>=70) {
        grade = 'C';
         printf("%c" , grade);
    } else if (marks<=70 && marks>=60) {
        grade = 'D';
         printf("%c" , grade);
    } else if (marks<=60 && marks>=50) {
        grade = 'E';
         printf("%c" , grade);
    } else if (marks < 50) {
        grade = 'F';
         printf("%c" , grade);
    } else {
        grade = 'N';
         printf("%c" , grade);
    }
    
   
    return 0;
}

