#include <stdio.h>
#include <stdlib.h>

struct std{
    char rno[10];
    char name[50];
    float marks;
};

int main(){
    int n, i, p;
    float max=0;
    struct std* arr;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    arr=(struct std*)malloc(n*sizeof(struct std));
    printf("Enter the details:\n");

    for(i=0; i<n; i++)
    {
    printf("Enter roll number: ");
    scanf("%s", &arr[i].rno);
    printf("Enter name: ");
    scanf("%s", &arr[i].name);
    printf("Enter marks: ");
    scanf("%f", &arr[i].marks);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i].marks>max)
        {
            max=arr[i].marks;
            p=i;
        }
    }

    printf("Student with Highest Marks:\nName: %s \nRoll Number: %s \nMarks = %f\n", arr[p].name, arr[p].rno, arr[p].marks);
    free(arr);
    return 0;
}