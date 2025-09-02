#include <stdio.h>

void goodMorning();
void goodAfternoon();
void goodEvening();

void goodMorning()
{
    printf("good morning \n");
}
void goodAfternoon()
{
    printf("good afternoon \n");
}
void goodEvening()
{
    printf("good evening \n");
}
int main()
{
    goodMorning();
    goodAfternoon();
    goodEvening();

    return 0;
}