#include <stdio.h>

int main() {

    FILE* ptr;
    int num = 4;
    ptr = fopen("table.txt" , "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr , "%d" , num*(i+1));
        fprintf(ptr , "%c" , '\n' );
    }
    
    return 0;
}