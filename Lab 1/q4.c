#include <stdio.h>

void swap(int* p, int* q)
{
    int* temp;
    temp=p;
    p=q;
    q=temp;
    printf("The swapped values are: %d %d",*p,*q);
}
int main(){
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int* pa=&a; 
    int* pb=&b;

    swap(pa, pb);

    return 0;
}