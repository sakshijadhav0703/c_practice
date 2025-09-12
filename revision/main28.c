#include <stdio.h>

float temp( float c);

float temp( float c) {
    return ((9.0/5.0)*c) + 32;
}
int main() {
    float num = 30.0;
    printf("The conversion is %f" , temp(num));

    return 0;
}