#include <stdio.h>

int sum (int* , int*);

int sum (int* a ,int* b) {
    *a = 10;
    return *a + *b;
}

// changing the value of x
int main() {
    int x = 23 , y = 45;
    printf("The sum of Two numbers is %d \n", sum(&x,&y));
    printf("The value of x is %d \n" , x);
    return 0;
}

