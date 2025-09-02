#include<stdio.h>

int main() {
    int r;
    int h;

    printf("Enter radius\n");
    scanf("%d" , &r);

    printf("Enter height\n");
    scanf("%d" , &h);

    printf("The area of circle with radius %d and with height %d is %f", r,h, 3.14*r*r*h);
    return 0;
}