// #include <stdio.h>

// int main() {
//     int n = 3;
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 2*i + 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h> 

// int main() {
//     int a = 10;
//     for (int i = 0; i < 10; i++)
//     {
//         for(int j = 0; j < i+1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include<stdio.h>

int main() {
    int i,j;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++) {
            printf("%d" ,j);
        }
        printf("\n");
    }
    
    return 0;
}