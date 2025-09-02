#include <stdio.h>
 typedef struct c
 {
    int real;
    int imaginary;
 } complex ;
 
int main() {
    complex c = {23 , 89};
    printf("The real no is %d real and imaginary number is i%d " , c.real,c.imaginary);
    return 0;
}