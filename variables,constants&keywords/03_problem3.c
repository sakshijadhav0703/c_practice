#include<stdio.h>

int main() {
    float c;
    float f;

    printf("Enter Celcius value\n");
    scanf("%f" , &c);

    printf("The value of %f degree celcius to fehranite is %f" , c, (((9.0/5.0)*c) + 32));

    return 0;
}
