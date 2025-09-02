#include <stdio.h>
#include <string.h>

int strlen(char str[]) {
    int i = 0;
    int count;
    char c = str[i];

    while(c != '\0'){
        c= str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main() {
    char str[] = "sakshi";
    printf("%d" , strlen(str));
    return 0;
}