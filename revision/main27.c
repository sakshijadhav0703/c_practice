#include <stdio.h>

int avg( int a , int b , int c );

int avg( int a , int b , int c ) {
    return (a+b+c) / 3 ;
}
int main() {
    int x = 10 , y = 10 , z = 10;
    printf("The average is %d " , avg(x , y , z));
    return 0;
}