#include <iostream>
using namespace std;

int convert(int km){
    return km*1000;
}
int convert(int meter, char){
    return meter*100;
}
float convert(float km){
    return km*1000;
}
int main(){
    int km, meter;
    float fkm;
    cout<<"Enter distance in km: ";
    cin>>km;
    cout<<"Enter distance in meter: ";
    cin>>meter;
    cout<<"Enter distance in km(float): ";
    cin>>fkm;
    cout<<km<<" km = "<<convert(km)<<" meters"<<endl;
    cout<<meter<<" meters = "<<convert(meter,'x')<<" cm"<<endl;
    cout<<fkm<<" km = "<<convert(fkm)<<" meters"<<endl;
    return 0;
}