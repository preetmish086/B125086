#include <iostream>
using namespace std;

void update(int &x, int amt)
{
    x+=amt;
}
void update(float &x, float amt)
{
    x+=amt;
}
void update(int arr[], int n, int amt)
{
    for(int i=0; i<n; i++)
    arr[i]+=amt;
}
int main(){
    int x, amt, n;
    float y, famt;
    int arr[100];
    cout<<"Enter int value: ";
    cin>>x;
    cout<<"Enter value to add: ";
    cin>>amt;
    update(x, amt);
    cout<<"After update: "<<x<<endl;
    cout<<"Enter float value: ";
    cin>>y;
    cout<<"Enter val to add: ";
    cin>>famt;
    update(y,famt);
    cout<<"After update: "<<y<<endl;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<"Enter val to add: ";
    cin>>amt;
    update(arr,n,amt);
    cout<<"After update: "<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}