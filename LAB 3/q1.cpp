#include <iostream>
using namespace std;

int main(){
    //dynamically allocating memory using new operator
    int *a = new int;
    int *b = new int;
    //taking input from user
    cout<<"Enter first number: ";
    cin>>*a;
    cout<<"Enter second number: ";
    cin>>*b;
    //calculating and printing sum, difference, product, quotient
    cout<<"Sum = "<< (*a + *b)<<endl;
    cout<<"Difference = "<< (*a - *b)<<endl;
    cout<<"Product = "<< (*a * *b)<<endl;
    if(*b != 0)
    cout<<"Quotient = "<< (*a / *b)<<endl;
    //checking division by zero
    else
    cout<<"Division by 0 not possible"<<endl;
    //releasing allocated memory
    delete a;
    delete b;
}