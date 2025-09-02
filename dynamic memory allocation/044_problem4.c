#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 10;
    int *ptr;
    ptr = (int*) malloc(n* sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf ( "7 x %d = %d \n" , i+1 , 7*(i+1) );
    }
    
    printf("The array is \n");

    ptr = (int*) realloc(ptr , 15*sizeof(int));

     for (int i = 0; i < 15; i++)
    {
        printf ( "7 x %d = %d \n" , i+1 , 7*(i+1) );
    }
    return 0;

}