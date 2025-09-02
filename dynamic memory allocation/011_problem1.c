#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int*ptr;
    ptr = (int*) malloc(n* sizeof(int));

    ptr[0] = 123;
    ptr[1] = 345;
    ptr[2] = 456;
    ptr[3] = 678;
    ptr[4] = 890;
    ptr[5] = 459;

    printf("%d \n" ,ptr[0]);
    printf("%d \n" ,ptr[1]);
    printf("%d \n" ,ptr[2]);
    printf("%d \n" ,ptr[3]);
    printf("%d \n" ,ptr[4]);
    printf("%d \n" ,ptr[5]);
    return 0;
}