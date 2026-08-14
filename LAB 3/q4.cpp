#include <iostream>
using namespace std;

int main(){
    int n, target, loc=-1;
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
    //taking input for target
    cout<<"Enter value to be searched: ";
    cin>>target;
    //linear search
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        loc=i;
    }
    //printing the location if found
    if(loc==-1)
    cout<<"Value not found"<<endl;
    else
    cout<<"Value found at index "<<loc;
    //releasing dynamically allocated memory
    delete[] arr;
    //preventing dangling pointer
    arr=nullptr;
    return 0;
}