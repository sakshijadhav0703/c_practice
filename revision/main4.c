#include <stdio.h>

int main() {
    int p;
    int r;
    int t;

    printf("Enter p : ");
    scanf("%d" , &p);

    printf("Enter r : ");
    scanf("%d" , &r);

    printf("Enter t : ");
    scanf("%d" , &t);


    printf("The simple interest is %d" , ((p*r*t)/100));
    return 0;
}