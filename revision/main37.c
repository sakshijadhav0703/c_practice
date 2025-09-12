#include <stdio.h>

int changeValue( int i) {
    return i = i*10;
}
int main() {
    int a = 10;
    printf("The changed value is %d" , changeValue(a));
    return 0;
}