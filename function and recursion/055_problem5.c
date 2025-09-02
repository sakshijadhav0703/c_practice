#include <stdio.h>

int sum(int n);

int sum(int n) {
    if( n == 1) {
        return 1;
    }
    return sum(n -1) + n;
}
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d" , &a);

    printf("The sum is %d" , sum(a));
    return 0;
}