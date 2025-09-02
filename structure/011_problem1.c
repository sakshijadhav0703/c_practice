#include <stdio.h>>

struct vector
{
    int i;
    int j;
};

int main() {
    struct vector v = { 23 , 45}; 
    printf("The value is %d i + %d j" , v.i , v.j);
    
    return 0;
}