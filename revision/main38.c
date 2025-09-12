#include <stdio.h>

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;

    printf("The address is %u and value is %d" , ptr+2 , *(ptr+2));
    return 0;
} 