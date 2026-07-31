#include <stdio.h>

struct std{
    char rno[10];
    char name[50];
    float marks;
};

int main(){
    struct std a;
    struct std* ptr;
    int i;
    ptr=&a;
    
    printf("Enter the details:\n");
    printf("Enter roll number: ");
    scanf("%s", &ptr->rno);
    printf("Enter name: ");
    scanf("%s", &ptr->name);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("Details entered are:\n");
    printf("Roll Number: %s \t Name: %s \t Marks: %f\n", ptr->rno, ptr->name, ptr->marks);
    return 0;
}