#include <iostream>
using namespace std;

//defining class MobileRecharge with mobile number, customer name and current balance as data members and member functions to accept details, calculate recharge amount, activate recharge plan nd display details
class MobileRecharge{
    char mobno[10];
    string name;
    double currbalance;

    public:
    //accepting details from user
    void acceptdetails(){
        cout<<"Enter mobile number: ";
        cin>>mobno;
        cout<<"Enter customer name: ";
        cin>>name;
        cout<<"Enter current balance: ";
        cin>>currbalance;
    }
    //recharging
    void recharge(){
        double amount;
        cout<<"Enter recharge amount: ";
        cin>>amount;
        if(amount>0){
            currbalance+=amount;
            cout<<"Recharge successful. "<<endl;
        }
        else{
            cout<<"Invalid recharge amount.\n"<<endl;
        }
    }
    //activating plan if valid
    void activateplan(){
        double planamt;
        cout<<"Enter recharge plan amount: ";
        cin>>planamt;
        if(planamt<=currbalance){
            currbalance-=planamt;
            cout<<"Recharge plan activated successfully. "<<endl;
        }
        else{
            cout<<"Insufficient balance for recharge plan.\n"<<endl;
        }
    }
    //displaying details
    void display(){
        cout<<"-----------------------------------------"<<endl;
        cout<<"Mobile number\t Customer name\t Current balance\n"<<endl;
        cout<<mobno<<"\t "<<name<<"\t "<<currbalance<<"\t"<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
};

//main function to create object and call member functions to accept details, recharge, activate plan and display details
int main(){
    MobileRecharge m;
    m.acceptdetails();
    m.recharge();
    m.activateplan();
    m.display();
    return 0;
}