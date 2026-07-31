#include <stdio.h>

int main(){

    int arr[50], n, i, sum=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int* ptr = arr;

    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }

    ptr = arr;

    for(i=0; i<n; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("Sum = %d", sum);
    
    return 0;
}