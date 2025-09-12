#include <stdio.h>

int main() {
    int arr[10];
    int a;

    printf("Enter number : ");
    scanf("%d" , &a);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = a*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" %d x %d = %d \n" , a , i+1 , arr[i]);
    }
    
    return 0;
}