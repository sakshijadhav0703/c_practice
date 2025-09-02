#include <stdio.h>
#include <string.h>

int main() {
    char c = 'f';
    int contains = 0;
    char str[] = "sakshi";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c) {
            contains = 1;
        }
    }
    if(contains) {
        printf("Yes it contains \n");
    } else{
        printf("It does not contains");
    }
    
    return 0;
}