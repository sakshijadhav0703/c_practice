#include <stdio.h>

float celciusToFehranhite(float c);

float celciusToFehranhite(float c) {
    return ((9.0*c)/5.0) + 32;
}
int main() {
    float  c = 45.0;
    printf("The conversion of celcius to fehranite for %f is %.2f",c , celciusToFehranhite(c));
    return 0;
} 