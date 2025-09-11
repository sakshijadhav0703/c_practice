#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter number : ");
    scanf("%d" , &a);

    printf("Enter number : ");
    scanf("%d" , &b);

    int i = 0;
    while (i < 1)
    {
        printf("The sum is %d \n" , a + b);
        i++;
    }
    
    return 0;
}