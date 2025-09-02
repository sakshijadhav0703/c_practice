#include <stdio.h>

int changeValue(int* i);

int changeValue(int* i) {
    return *i = *i * 10;
}
int main() {
    int x = 45;
    printf("The value of x is %d \n" , x);
    changeValue(&x);
    printf("The value of x is %d \n" , x);
    return 0;
}