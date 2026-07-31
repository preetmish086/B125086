#include <stdio.h>

int main(){
    int arr[50], n, i, target;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched for: ");
    scanf("%d", &target);
    for(i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            printf("%d found at position %d", target, i);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}