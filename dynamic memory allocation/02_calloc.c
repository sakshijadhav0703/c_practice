#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d" , &n);
    ptr = (int*) calloc(n , sizeof(int));

   ptr[4] =1;
    printf("%d" ,ptr[4]);
    return 0;
}