#include <stdio.h>

typedef struct c {
    int real;
    int imaginary;
} complex ;

int main() {
    complex c1;
    complex c2;

    printf("Enter real number : \n");
    scanf("%d" , &c1.real);

    printf("Enter imaginary number : \n");
    scanf("%d" , &c2.imaginary);

    printf("The value of complex number is %d + %di \n" ,c1.real ,c2.imaginary);
    return 0;
}