#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d" ,&n);

    int arr[n] , temp;
    printf("Enter %d digits" , n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("the reversed array : ") ;
        for (int i = 0; i < n; i++) 
        {
            printf("%d " ,arr[i]);
        }
        printf("\n");
        
    
    
    
    
    
    return 0;
}