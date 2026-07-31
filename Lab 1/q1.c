#include <stdio.h>

int main(){
    int arr[50], n, i, min, max=0, sum=0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min=arr[0];
    for(int i=0; i<n; i++)
    {
        min=(arr[i]<min)?arr[i]:min;
        max=(arr[i]>max)?arr[i]:max;
        sum+=arr[i];
    }
    avg=sum/n;

    printf("Largest element= %d\n", max);
    printf("Smallest element= %d\n", min);
    printf("Average of elements= %d\n", avg);

    return 0;
}