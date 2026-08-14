#include <iostream>
using namespace std;

int main(){
    int n, e=0, o=0;
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
    //counting no. of odd and even elements
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2)
        o++;
        else
        e++;
    }
    //printing the counts
    cout<<"Number of odd elements= "<<o<<" and even elements= "<<e;
    //releasing the dynamically allocated memory
    delete[] arr;
    //preventing dangling pointer
    arr=nullptr;
    return 0;
}