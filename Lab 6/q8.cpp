#include <iostream>
using namespace std;

class Temperature{
    private:
    int c;
    public:
    //constructor to initialize the temperature
    Temperature(int celcius){
        c=celcius;
    }
    //overloading > operator to compare two temperatures
    bool operator>(Temperature t){
        return c>t.c;
    }
    //overloading < operator to compare two temperatures
    bool operator<(Temperature t){
        return c<t.c;
    }
    //overloading - operator to get the negative of the temperature
    Temperature operator-(){
        return Temperature(-c);
    }
    void display(){
        cout<<c<<endl;
    }
};

int main(){
    int t;
    cout<<"Enter 1st temperature in celcius: ";
    cin>>t;
    Temperature t1(t);
    cout<<"Enter 2nd temperature in celcius: ";
    cin>>t;
    Temperature t2(t);

    if(t1>t2) //using overloaded > operator
    {cout<<"Greater Temperature: ";
    t1.display();
    }
    else if(t1<t2) //using overloaded < operator
    {cout<<"Greater Temperature: ";
    t2.display();
    }
    else
    cout<<"Both temperatures are equal."<<endl;

    t2=-t1; //using overloaded - operator to get the negative of the temperature
    cout<<"Negated 1st Temperature: ";
    t2.display();
}