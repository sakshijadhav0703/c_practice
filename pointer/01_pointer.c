#include <stdio.h>

int sum(int , int);

int sum(int a, int b) {
    return a+b;
}
int main() {
     int x = 23 ,  y =45;
    printf("The sum of A and B is %d" ,sum(x,y));
    return 0;
}