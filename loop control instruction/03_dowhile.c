#include <stdio.h>

int main() {
    // int i = 0;
    // do
    // {
    //     printf("The value is %d \n" , i);
    //     i++;
    // } while (i < 10);
    

    int n , i = 0;
    printf("Enter number : \n");
    scanf("%d" , &n);

    do {
        printf("The value is %d \n" , i);
        i++;
    } while (i <= n);
    return 0;
}