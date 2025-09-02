#include <stdio.h>

int average(int a, int b, int c);

int average(int a, int b, int c)
{
    return (a + b + c) / 3;
}
int main()
{
    int a, b, c;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);
    
    printf("Enter c : ");
    scanf("%d", &c);

    printf("The average of a, b, and c is %d", average(a, b, c));
    return 0;
}