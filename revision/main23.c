#include <stdio.h>

int main()
{
    int prime = 0;
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    int i = 2;
    while (i < n);
        
    {
        if (n % i == 0)
        {
            prime = 1;
        }
        i++;
    }

    if (prime)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }

    return 0;
}