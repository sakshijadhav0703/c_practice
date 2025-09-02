#include<stdio.h>

int main() {

    int a =34, b =45, c =9, d =21;

    if(a>b && a>c && a>d) {
        printf("The greatest value is %d" , a);
    } else if(b>a && b>c && b>d) {
        printf("The greatest value is %d" , b); 
    } else if(c>a && c>b && c>d) {
        printf("The greatest value is %d" , c);
    } else if(d>b && d>c && d>a) {
        printf("The greatest value is %d" , d);
    }
    return 0;
}