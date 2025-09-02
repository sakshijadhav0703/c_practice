#include <stdio.h>

struct vector
{
    int i;
    int j;
};


struct vector sumVector( struct vector v1 , struct vector v2){
    struct vector v3 = {v1.i + v2.i , v1.j + v2.j};
    return v3;
}


int main() {
    struct vector v1 = {23 , 11};
    struct vector v2 = {45, 22};
    struct vector v3 = sumVector(v1,v2);
    printf("The value of v3 is %d i + %d j" , v3.i ,v3.j);
    return 0;
}