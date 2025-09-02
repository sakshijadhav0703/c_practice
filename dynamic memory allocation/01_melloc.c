#include <stdio.h>
#include <stdlib.h>

int main() {
    float n = 5;
    float *ptr;
    ptr = (float*) malloc(n * sizeof(float));

    ptr[0] = 3.00;
    ptr[1] = 4.00;
    ptr[2] = 5.00;
    ptr[3] = 6.00;
    ptr[4] = 7.00;

    printf("%f \n" , ptr[0]);
    printf("%f \n" , ptr[1]);
    printf("%f \n" , ptr[2]);
    printf("%f \n" , ptr[3]);
    printf("%f \n" , ptr[4]);
    return 0;
}