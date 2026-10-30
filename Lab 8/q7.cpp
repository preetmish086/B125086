#include <iostream>
using namespace std;

class ElectricityPlan{
    public:
    virtual void calculateBill(double units){
        cout<<"Calculating bill"<<endl;
    }
};

class ResidentialPlan:public ElectricityPlan{
    public:
    void calculateBill(double units){
        double bill;
        if(units<=100)
        bill=units*4;
        else
        bill=100*4+(units-100)*6;
        cout<<"Residential Bill: "<<bill<<endl;
    }
};

class CommercialPlan:public ElectricityPlan{
    public:
    void calculateBill(double units){
        cout<<"Commercial Bill: "<<units*7<<endl;
    }
};

int main(){
    ResidentialPlan r;
    CommercialPlan c;
    ElectricityPlan *p;
    p=&r;
    p->calculateBill(150);
    p=&c;
    p->calculateBill(150);
    return 0;
}