#include <stdio.h>

int main() {
    int product = 1;
    int n;

    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The product is %d" , product);
    
    return 0;
}