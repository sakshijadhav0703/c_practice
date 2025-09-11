#include<stdio.h>

int main() {
    int n ;

    printf("Enter number : ");
    scanf("%d" , &n);

    for (int i = n; i ; i--)
    {
        printf("The value is %d \n" , i );
    }
    
    return 0;
}