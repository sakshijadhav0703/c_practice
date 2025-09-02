#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *ptr;
    ptr = (int*) calloc(n , sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \n" ,ptr[i]);
    }

    printf("The array is \n");

    n =10;
    ptr = (int*) realloc(ptr , 10*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \n" ,ptr[i]);
    }
    
    
    return 0;
}