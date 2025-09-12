#include <stdio.h>

int main() {
    char str[6];

    for (int i = 0; i < 6; i++)
    {
       scanf("%c", &str[i]);
       fflush(stdin);
    }
    printf(str);
    
    // printf("Enter str : ");
    // scanf("%s" ,&str);
    // printf("%s" ,str);
    return 0;
}