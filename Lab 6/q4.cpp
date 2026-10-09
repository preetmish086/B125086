#include <iostream>
using namespace std;

class AccountBalance{
    float balance;

    public:
    //constructor to initialize the account balance
    AccountBalance(float b){
        balance=b;
    }
    //overloading - operator to get the negative of the account balance
    AccountBalance operator-(){
        return AccountBalance(-balance);
    }
    void display(){
        cout<<"Balance= "<<balance<<endl;
    }
};

int main(){
    float b;
    cout<<"Enter account balance: ";
    cin>>b;
    AccountBalance a1(b);
    AccountBalance a2= -a1; //using overloaded - operator to get the negative of the account balance

    cout<<"Original Balance: "<<endl;
    a1.display();
    cout<<"Negative Balance: "<<endl;
    a2.display();

    return 0;
}