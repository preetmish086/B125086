#include <stdio.h>

struct student{
    char rno[10];
    char name[50];
    float marks;
};

int main(){
    struct student list[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter roll number: ");
        scanf("%s", &list[i].rno);
        printf("Enter name: ");
        scanf("%s", &list[i].name);
        printf("Enter marks: ");
        scanf("%f", &list[i].marks);
    }

    printf("----------------------------------------------\n");
    printf("Details of Students\n");
    printf("----------------------------------------------\n");
    printf("Student No. \t Roll No. \t Name \t Marks\t\n");

    for(i=0; i<5; i++)
    {
        printf("%d \t\t %s \t\t %s \t\t %f\t\t\n", i, list[i].rno, list[i].name, list[i].marks);
    }
    
    return 0;
}