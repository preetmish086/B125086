#include <iostream>
using namespace std;

class Date{
    private:
    int d;
    int m;
    int y;
    public:
    //constructor to initialize the date
    Date(int day, int month, int year){
        d=day;
        m=month;
        y=year;
    }
    //overloading == operator to compare two dates
    bool operator==(Date dt){
        return (d==dt.d && m==dt.m && y==dt.y);
    }
    //overloading != operator to compare two dates
    bool operator!=(Date dt){
        return !(d==dt.d && m==dt.m && y==dt.y);
    }
    void display(){
        cout<<d<<"/"<<m<<"/"<<y<<endl;
    }
};

int main(){
    int d,m,y;
    cout<<"Enter day, month and year of 1st date:(int) ";
    cin>>d>>m>>y;
    Date dt1(d,m,y);
    cout<<"Enter day, month and year of 2nd date:(int) ";    
    cin>>d>>m>>y;
    Date dt2(d,m,y);

    if(dt1==dt2) //using overloaded == operator
    cout<<"Dates are equal."<<endl;
    else if(dt1!=dt2) //using overloaded != operator
    cout<<"Dates are not equal."<<endl;

    return 0;
}