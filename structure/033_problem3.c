#include <stdio.h>

typedef struct employee {
    float no;
    int salary;
} emp ;
int main() {
    emp e1;
    emp* ptr = &e1;

    ptr->salary = 56000;
    ptr->no = 1;

    printf("The number is %f and the salary is %d" , ptr->no , ptr->salary);
    return 0;
}