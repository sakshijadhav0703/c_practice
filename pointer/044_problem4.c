#include <stdio.h>

int sum(int* a , int* b);

int sum(int* a , int* b) {
    // *a = 1;
    return *a + *b;
}
int main() {
    int x = 56 , y = 45;
    printf("The sum is %d \n" ,sum(&x,&y));
    return 0;
}