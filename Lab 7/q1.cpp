#include <iostream>
using namespace std;

class Ticket{
    protected:
    string name;
    int km;
    public:
    Ticket(string n, int k){
        name = n;
        km = k;
    }
};

class RailwayTicket : public Ticket{
    float rate;
    public:
    RailwayTicket(string n, int k, float r) : Ticket(n,k){
        rate = r;
    }
    void display(){
        float fare = km*rate;
        if(km>300)
        fare=fare-(fare*0.10);
        cout<<"Passenger Name: "<<name<<"\nDistance: "<<km<<"\nFinal Fare: "<<fare<<endl;
    }
};

int main(){
    RailwayTicket t("abc", 400, 2.5);
    t.display();
    return 0;
}