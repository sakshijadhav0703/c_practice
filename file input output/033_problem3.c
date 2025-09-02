#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("salary.txt", "w");
    int num;

    char name1[34], name2[34];
    int salary1, salary2;

    printf("Enter name1 : ");
    scanf("%s", name1);

    printf("Enter salary1 : ");
    scanf("%s", &salary1);

    printf("Enter name2 : ");
    scanf("%s", name2);

    printf("Enter salary2 : ");
    scanf("%s", &salary2);

   fprintf(ptr , "%s" , name1);
   fprintf(ptr , "%s" , ", ");
   fprintf(ptr , "%d" , salary1);
   fprintf(ptr , "%c" ,'\n');

   fprintf(ptr , "%s" , name2);
   fprintf(ptr , "%s" , ", ");
   fprintf(ptr , "%d" , salary2);
   fprintf(ptr , "%c" ,'\n');

    return 0;
}