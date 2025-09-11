#include <stdio.h>

int main () {
    int a;

    printf("Enter the number : ");
    scanf("%d" , &a);
    if( a % 97 == 0) {
        printf("Divisible");
    } else {
        printf("Not divisible");
    }
    return 0;
}