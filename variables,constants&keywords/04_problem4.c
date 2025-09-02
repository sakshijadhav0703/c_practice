#include<stdio.h>

int main() {
    float p;
    int r;
    int t;

    printf("Enter p\n");
    scanf("%f" , &p);

    printf("enter r\n");
    scanf("%d" , &r);

    printf("enter t\n");
    scanf("%d" , &t);

    printf("The value of simple interest is %f", (p*r*t)/100);
    return 0;
}