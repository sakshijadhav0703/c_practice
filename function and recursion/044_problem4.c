#include <stdio.h>

int fibonaachi(int n);

int fibonaachi(int n) {
    if(n == 1 || n == 2) {
        return n-1;
    }
    return fibonaachi(n-1) + fibonaachi(n-2);
}

int main() {
    int n = 5;
    printf("The value of fibonacchi series at %d is %d " ,n ,fibonaachi(n));
    return 0;
}