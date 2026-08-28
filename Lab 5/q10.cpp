#include <iostream>
using namespace std;
float evaluate(int a, int b)
{
    return (a+b)/2.0;
}
float evaluate(int a, int b, int c)
{
    return (a+b+c)/3.0;
}
float evaluate(float a, float b)
{
    return (a+b)/2.0;
}
float evaluate(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return (float)sum/n;
}
float evaluate(int *a, int *b){
    return(*a+*b)/2.0;
}
int main(){
    int a, b, c, n;
    float x,y;
    int arr[100];
    cout<<"Enter two ints: ";
    cin>>a>>b;
    cout<<"Average= "<<evaluate(a,b)<<endl;
    cout<<"Enter two floats: ";
    cin>>x>>y;
    cout<<"Average: "<<evaluate(x,y)<<endl   ;
    cout<<"Enter size of int array: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<"Average of array: "<<evaluate(arr,n)<<endl;
    cout<<"Enter two integers for ptr avg: ";
    cin>>a>>b;
    cout<<"Average using pointers: "<<evaluate(&a, &b)<<endl;
    return 0;
}