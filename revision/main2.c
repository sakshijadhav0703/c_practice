#include <stdio.h>

int main() {
    float radius;
   float height;

    printf("Enter the radius : ");
    scanf("%f" , &radius);

     printf("Enter the height : ");
    scanf("%f" , &height);

    printf("The volume of cylinder whose radius is %f and height is %f is %f" , radius , height ,3.14*radius*radius*height);
    return 0;
}