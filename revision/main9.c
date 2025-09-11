#include <stdio.h>

int main() {
    char character;

    printf("Enter Character : ");
    scanf("%c" ,&character );
    printf("The value of character is %d \n" , character);

    if(character <= 97 && character >= 122) {
        printf("Lowercase");
    } else {
        printf("Uppercase");
    }
    return 0;
}