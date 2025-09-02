#include <stdio.h>

int changeValue(int i);

int changeValue(int i) {
    return i = i *10;
}
int main() {
    int a = 5;
    printf("The value after 10 times is %d" , changeValue(a));
    return 0;
}