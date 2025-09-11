#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter number : ");
    scanf("%d" , &a);

    printf("Enter number : ");
    scanf("%d" , &b);

    int i = 0;
   do
   {
    printf("The sum is %d" , a+b);
    i++;
   } while (i<1);
   
    
    return 0;
}