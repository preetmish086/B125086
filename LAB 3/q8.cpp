#include <iostream>
using namespace std;

//taking input
void accept(int *a, int n){
    cout<<"Enter elements:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}
//finding sum
int sum(int *a, int n)
{
    int s=0;
    for(int i=0; i<n; i++)
    s+=a[i];
    return s;
}
//finding smallest number
int min(int *a, int n)
{
    int min=a[0];
    for(int i=0; i<n; i++)
    if(a[i]<min)
    min=a[i];
    return min;
}
//finding largest number
int max(int *a, int n)
{
    int max=a[0];
    for(int i=0; i<n; i++)
    if(a[i]>max)
    max=a[i];
    return max;
}
//displaying results
void display(int sum, int min, int max)
{
    cout<<"Sum= "<<sum<<" Smallest= "<<min<<" Largest= "<<max<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    //dynamically allocating memory to the array
    int *arr= new int[n];
    accept(arr, n);
    int s=sum(arr, n);
    int mi=min(arr, n);
    int ma=max(arr, n);
    display(s, mi, ma);
    //releasing allocated memory
    delete[] arr;
    //preventing dangling pointer
    arr=nullptr;
    return 0;
}