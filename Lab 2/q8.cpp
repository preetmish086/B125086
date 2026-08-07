#include <iostream>
using namespace std;

//defining class HostelFee with student name, hostel id, fee per month and number of months as input
class HostelFee{
    string name;
    char id[10];
    double feepermonth;
    int months;

    public:
    //accepting details
    void acceptdetails(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter hostel ID: ";
        cin>>id;
        cout<<"Enter monthly fee: ";
        cin>>feepermonth;
        cout<<"Enter number of months: ";
        cin>>months;
    }
    //calculating total fees
    double calculatetotal(){
        double total=feepermonth*months;
        return total;
    }
    //chacking latefine if applicable
    double latefine(double total){
        int delay;
        cout<<"Enter 1 if there is a delay in payment, else enter 0: ";
        cin>>delay;
        if(delay)
            total+=500;
        return total;
    }
    //displaying details
    void display(double total){
        cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"Student name\t Hostel ID\t Monthly fee\t Number of months\t Final amount payable\n"<<endl;
        cout<<name<<"\t\t "<<id<<"\t\t "<<feepermonth<<"\t\t "<<months<<"\t\t\t "<<total<<endl;
        cout<<"---------------------------------------------------------------------------"<<endl;
    }
};

//main function to declare object and call member functions to accept details, calculate fee, late fee and display details
int main(){
    HostelFee h;
    h.acceptdetails();
    double total = h.latefine(h.calculatetotal());
    h.display(total); 
    return 0;
}