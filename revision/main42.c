#include <stdio.h>

int main() {
    int arr[3][10];
    int multi[] = {2 , 7, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = multi[i]*(j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           printf("Multiplication table is %d \n" , arr[i][j]);
        }
        
    }
    
    return 0;
}