#include <stdio.h>

int sum (int a , int b) {
    return a+b;
}

int avg (int a , int b) {
    return (a+b) / 2;
}
int main() {
    int x = 23 , y = 34;
    printf("The sum is %d \n" , sum(x,y));
    printf("The average is %d \n" , avg(x,y));
    return 0;
}