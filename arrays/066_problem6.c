#include <stdio.h>

int main() {
    int n1 , n2 , n3;
    scanf("%d %d %d" , &n1,&n2,&n3);
    int arr[3][10];
    int multi[] = {n1 , n2 , n3};

    // printf("Enter the number : ");
    // scanf("%d" , &n1);

    // printf("Enter the number : ");
    // scanf("%d" , &n2);

    // printf("Enter the number : ");
    // scanf("%d" , &n3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = multi[i] * (j+1);
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The table of arr[i][j] is %d \n" , arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}