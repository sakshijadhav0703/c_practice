#include<stdio.h>

int main() {
    char a;
    printf("Enter letter : \n");
    scanf("%c" ,&a);
    printf("The value of character is %d\n" , a);

    if(a >= 97 && a <= 122) {
        printf("The letter is Lowercase");
    } else {
        printf("The letter is Uppercase");
    }
    return 0;
}