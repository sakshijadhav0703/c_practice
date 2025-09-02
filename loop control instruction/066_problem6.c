#include <stdio.h>

int main()
{
    int prime = 0;
    int n;

    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
        }
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