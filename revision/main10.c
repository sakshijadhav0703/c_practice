#include <stdio.h>

int main()
{
    int a = 12, b = 23, c = 34, d = 45;
    if (a > b && a > c && a > d)
    {
        printf("The greatest value is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("Greatest value is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("Greatest value is %d", c);
    }
    else if (d > a && d > c && d > b)
    {
        printf("Greatest value is %d", d);
    }
    return 0;
}