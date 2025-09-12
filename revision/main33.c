#include <stdio.h>

int changeValue (int *a);

int changeValue (int *a) {
    return *a = *a *10;
}
int main() {
    int x= 10;
    printf("The  value is %d \n" , x);
    changeValue(&x);
    printf("The changed value is %d" , x);
    
    return 0;
}