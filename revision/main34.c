#include <stdio.h>

int value ( int *a , int *b);

int value ( int *a , int *b) {
    return *a + *b;
}
int main() {
    int x = 10 , y = 12;
    printf("The value is %d \n" , value(&x ,&y));
 
    return 0;
}