#include <stdio.h>

int value(int* ptr) {
    printf("The value of ptr is %d \n",ptr);
    printf("The value at ptr is %d \n" ,*ptr);
    return 5;
}

int main() {
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u \n" , &i);
    value(ptr);
    return 0;
}