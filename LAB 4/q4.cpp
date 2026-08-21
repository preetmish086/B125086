#include <iostream>
using namespace std;

class ElectricMeter{
    private:
    int num;
    string name;
    int units;
    public:
    void input(){
        cout<<"Enter meter number: ";
        cin>>num;
        cout<<"Enter consumer name: ";
        cin>>name;
        cout<<"Enter units consumed: ";
        cin>>units;
    }
    friend void checkUsage(ElectricMeter e); 
};
void checkUsage(ElectricMeter e){
    cout<<"\n\n-----Consumer Details-----"<<endl;
    cout<<"Meter NUmber: "<<e.num<<endl;
    cout<<"Consumer Name: "<<e.name<<endl;
    cout<<"Units Consumed: "<<e.units<<endl;
    if(e.units<100)
    cout<<"Low Usage";
    else if(e.units<300)
    cout<<"Moderate Usage";
    else
    cout<<"High Usage";
}
int main(){
    ElectricMeter e;
    e.input();
    checkUsage(e);
    return 0;
}