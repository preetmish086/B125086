#include <iostream>
#include <cctype>
using namespace std;

void check(int a){
    if(a==0)
    cout<<"Integer is 0"<<endl;
    else if(a<0)
    cout<<"Integer is negative"<<endl;
    else
    cout<<"Integer is positive"<<endl;
}
void check(char ch){
    if(isupper(ch))
    cout<<"Character is uppercase"<<endl;
    else if(islower(ch))
    cout<<"Character is lowercase"<<endl;
    else
    cout<<"Charcater is not a letter"<<endl;
}
void check(char arr[], int n, char target){
    bool p=false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {p=true;
            break;
        }
    }
    if(p)
    cout<<"Character found in array"<<endl;
    else
    cout<<"Character not found in the array"<<endl;
}
int main(){
    int n, size;
    char ch, target;
    char arr[100];
    cout<<"Enter an integer: ";
    cin>>n;
    check(n);
    cout<<"Enter a char: ";
    cin>>ch;
    check(ch);
    cout<<"Enter size of char array: ";
    cin>>size;
    cout<<"Enter characters: "<<endl;
    for(int i=0; i<size; i++)
    cin>>arr[i];
    cout<<"Enter char to be searched: ";
    cin>>target;
    check(arr, size, target);

    return 0;
}