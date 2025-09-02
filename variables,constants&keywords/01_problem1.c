#include<stdio.h>

int main() {
    int length;
    int breadth;

    printf("enter length\n");
    scanf("%d" ,&length);

    printf("enter breadth\n");
    scanf("%d" ,&breadth);

    printf("The area of given rectangle is %d" ,length*breadth);
    return 0;
}