#include <stdio.h>

struct student{
    char rno[10];
    char name[50];
    float marks;
};

int main(){
    struct student list[5];
    int i, p;
    float max=0, sum=0, avg;

    for(i=0; i<5; i++)
    {
        printf("Enter roll number: ");
        scanf("%s", &list[i].rno);
        printf("Enter name: ");
        scanf("%s", &list[i].name);
        printf("Enter marks: ");
        scanf("%f", &list[i].marks);
    }

    for(i=0; i<5; i++)
    {
        if(list[i].marks>max)
        {
            max=list[i].marks;
            p=i;
        }
        sum+=list[i].marks;
    }
    avg=sum/5;

    printf("Student with Highest Marks:\nName: %s \nRoll Number: %s \nMarks = %f\n", list[p].name, list[p].rno, list[p].marks);
    printf("\nThe average marks = %f\n", avg);
    
    return 0;
}