#include <iostream>
using namespace std;

void process(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    sum+=arr[i];
    cout<<"Sum of int array= "<<sum<<endl;
}
void process(float arr[], int n)
{
    float sum=0;
    for(int i=0; i<n; i++)
    sum+=arr[i];
    cout<<"Sum of float array= "<<sum<<endl;
}
void process(int arr[], int n, int k)
{
    int sum=0;
    for(int i=0; i<k; i++)
    sum+=arr[i];
    cout<<"Sum of "<<k<<" elements= "<<sum<<endl;
}
int main(){
    int a[100], c[100];
    float b[100];
    int an, bn, cn, k;
    cout<<"Enter size of int array: ";
    cin>>an;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<an; i++)
    cin>>a[i];
    process(a, an);
    cout<<"Enter size of float array: ";
    cin>>bn;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<bn; i++)
    cin>>b[i];
    process(b,bn);
    cout<<"Enter size of int array: ";
    cin>>cn;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<cn; i++)
    cin>>c[i];
    cout<<"Enter k: ";
    cin>>k;
    process(c, cn, k);
    return 0;
}