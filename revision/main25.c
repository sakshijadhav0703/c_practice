#include<stdio.h> 

void goodMorning();
void goodAfternoon();
void goodEvening();

 void goodMorning(){
    printf("Good Morning \n");
}

void goodAfternoon() {
    printf("Good Afternoon \n");
}

void goodEvening() {
    printf("Good Evening \n");
}

int main() {

    goodMorning();
    goodAfternoon();
    goodEvening();

    return 0;
}