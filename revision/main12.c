#include <stdio.h>

int main() {

    int i = 0 , n;

    printf("Enter number : ");
    scanf("%d" , &n);
    do
    {
        printf("The numbers are %d \n" , i);
        i++;
    } while (i <= n);
    
    return 0;
}