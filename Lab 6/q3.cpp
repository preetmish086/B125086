#include <iostream>
#include <string>
using namespace std;

class Book{
    string t;
    float p;

    public:
    //constructor to initialize the book
    Book(string title, float price){
        t=title;
        p=price;
    }
    //overloading < operator to compare two books based on price and title
    bool operator<(Book b){
        if(p==b.p)
        return t<b.t;
        else
        return p<b.p;
    }
};

int main(){
    string t1, t2;
    float p1, p2;
    cout<<"Enter the title and price of the 1st book: ";
    cin>>t1>>p1;
    cout<<"Enter the title and pric eof the 2nd book: ";
    cin>>t2>>p2;
    Book b1(t1,p1), b2(t2,p2);
    
    if(b1<b2) //using overloaded < operator
    cout<<"First book is smaller."<<endl;
    else
    cout<<"First book is not smaller."<<endl;
    
    return 0;
}