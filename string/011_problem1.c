#include <stdio.h>

int main() {
    // char str[6];
    // printf("Enter the string : ");
    // scanf("%s" , str);
    // printf("%s" , str);

    char str[7];
    for (int i = 0; i < 6; i++)
    {
        scanf("%c" , &str[i]);
        fflush(stdin);
    }
    str[6] ='\0';
    printf("%s" , str);
    
    return 0;
}