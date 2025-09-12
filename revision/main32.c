#include <stdio.h>

int address( int* ptr);

int address( int* ptr) {
    printf("The address is %d \n" ,address);
    printf("The address is %d \n" ,ptr);
}
int main() {
    int i = 12;
    int *ptr = &i;

    printf("The address of i is %d \n" , ptr);
    address(ptr);
    return 0;
}