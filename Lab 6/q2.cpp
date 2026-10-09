#include <iostream>
using namespace std;

class Duration{
    private:
    int hrs;
    int mins;
    public:
    //constructor to initialize the duration
    Duration(int h, int m)
    {
        hrs=h;
        mins=m;
    }
    //overloading + operator to add two durations
    Duration operator+(Duration d){
        int m=mins+d.mins;
        if(m>=60)
        hrs+=(m)/60;
        m%=60;
        int h=hrs+d.hrs;
        return Duration(h,m);
    }
    void display(){
        cout<<hrs<<" hours "<<mins<<" minutes"<<endl;
    }
};

int main(){
    int h1,m1,h2,m2;
    cout<<"Enter hours and minutes of 1st and 2nd duration: ";
    cin>>h1>>m1>>h2>>m2;
    Duration d1(h1,m1), d2(h2,m2);
    cout<<"First duration: ";
    d1.display();
    cout<<"Second duration: ";
    d2.display();
    
    Duration d3 = d1 + d2; //using overloaded + operator
    cout<<"Addition: ";
    d3.display();

    return 0;
}