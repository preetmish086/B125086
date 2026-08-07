#include <iostream>
using namespace std;

//defining class car with car number, model name and model year as data members and member functions to accept and display car details
class Car{
    int num;
    string name;
    int yr;

    public:
    //to accept car details from user
    void details(){
        cout<<"Enter car number: ";
        cin>>num;
        cout<<"Enter brand name: ";
        cin>>name;
        cout<<"Enter model year: ";
        cin>>yr;
    }
    //to display car details
    void display(){
        cout<<"-----------------------------------------"<<endl;
        cout<<"Car number\t Brand name\t Model year\n"<<endl;
        cout<<num<<"\t\t "<<name<<"\t\t "<<yr<<"\t\t"<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
};

//main function to create object of class car and call member functions to accept and display car details
int main(){
    Car c1;
    c1.details();
    c1.display();
    return 0;
}