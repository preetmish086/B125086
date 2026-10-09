#include <iostream>
using namespace std;

class Bill{
    private:
    int n;
    float bill;
    public:
    //constructor to initialize the bill
    Bill(int units, float amount){
        n=units;
        bill=amount;
    }
    //overloading + operator to add two bills
    Bill operator+(Bill b){
        return Bill(n+b.n, bill+b.bill);
    }
    //overloading > operator to compare two bills
    bool operator>(Bill b){
        return bill>b.bill;
    }
    void display(){
        cout<<"Units: "<<n<<", Bill Amount: "<<bill<<endl;
    }
};

int main(){
    int n1,n2;
    float b1,b2;
    cout<<"Enter number of units and bill amount of 1st bill: ";
    cin>>n1>>b1;
    cout<<"Enter number of units and bill amount of 2nd bill: ";
    cin>>n2>>b2;
    Bill bill1(n1,b1), bill2(n2,b2);
    
    Bill totalBill = bill1 + bill2; //using overloaded + operator
    cout<<"Combined bill amount: "<<endl;
    totalBill.display();

    if(bill1>bill2) //using overloaded > operator
        cout<<"First bill is greater."<<endl;
    else
        cout<<"Second bill is greater."<<endl;

    return 0;
}