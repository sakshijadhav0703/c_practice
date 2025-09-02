#include <stdio.h>

int sum(int a , int b);

float average(float a , float b);

int sum(int a , int b) {
    return a + b;
}
float average(float a , float b) {
    return a + b / 2.0;
}


int main() {
    int x = 12 , y = 5;
    printf("The sum is %d \n" ,sum(x ,y));
    printf("The average is %f \n",average(x , y));
}