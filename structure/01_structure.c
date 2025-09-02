#include<stdio.h>

struct student {
    char name[50];
    int rollno;
    float marks;
};

int main() {

    struct student s1, s2 , s3;

    printf("Enter name rollno and marks of s1 :");
    scanf("%s %d %f" , s1.name , &s1.rollno , &s1.marks);
    printf("Enter name rollno and marks of s2 :");
    scanf("%s %d %f" , s2.name , &s2.rollno , &s2.marks);
    printf("Enter name rollno and marks of s1 :");
    scanf("%s %d %f" , s3.name , &s3.rollno , &s3.marks);

    printf("The name rollno and marks of s1 are %s %d %f \n" , s1.name , s1.rollno ,s1.marks);
    printf("The name rollno and marks of s2 are %s %d %f \n" , s2.name , s2.rollno ,s2.marks);
    printf("The name rollno and marks of s3 are %s %d %f \n" , s3.name , s3.rollno ,s3.marks);

    return 0;

    
}