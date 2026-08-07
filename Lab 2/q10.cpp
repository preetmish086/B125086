#include <iostream>
using namespace std;

//defining class WaterBill with customer number, name and water consumption as data members and member functions to accept details, calculate bill and display report
class WaterBill{
    int num;
    string name;
    float consumption;

    public:
    //accepting details
    void acceptdetails(){
        cout<<"Enter customer number: ";
        cin>>num;
        cout<<"Enter customer name: ";
        cin>>name;
        cout<<"Enter water consumption in litres: ";
        cin>>consumption;
    }
    //calculating bill based on water consumption (using slabs)
    float calculatebill(){
        float bill;
        if(consumption>=1000)
        bill=(500*2)+(500*3)+(consumption-1000)*5;
        else if(consumption>=500)
        bill=(500*2)+(consumption-500)*3;
        else
        bill=consumption*2;
        return bill;
    }
    //displaying report
    void display(float bill){
        cout<<"Consumer Number\tConsumer Name\tWater Consumption (litres)\tTotal Bill\n"<<endl;
        cout<<num<<"\t\t "<<name<<"\t\t "<<consumption<<"\t\t\t "<<bill<<endl;
    }
};

//main function to declare object and call member functions to accept details, calculate bill and display report
int main()
{
    WaterBill w;
    w.acceptdetails();
    float bill = w.calculatebill();
    w.display(bill);
    return 0;
}