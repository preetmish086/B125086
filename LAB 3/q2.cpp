#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    //dynamically allocating an array of n elements using new operator
    int *arr= new int[n];
    //taking input of values
    cout<<"Enter "<<n<<" values:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //printing in reverse order
    cout<<"Elements in reverse order:\n";
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    //releasing the allocated memory using delete[] operator
    delete[] arr;
    //preventing dangling pointer
    arr=nullptr;
    return 0;
}