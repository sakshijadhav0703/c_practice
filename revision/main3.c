#include <stdio.h>

int main() {
    float c;
    float f;

    printf("Enter temp in celcius : ");
    scanf("%f" , &c);

    printf("The value of converting celcius %f is fehranhite %f ", c , ((9.0/5.0)*c) + 32 );
    return 0;
}