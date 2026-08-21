#include <iostream>
using namespace std;

class Weather{
    private:
    string cityname;
    float temp;
    string condn;
    public:
    void input(){
        cout<<"Enter city name: ";
        cin>>cityname;
        cout<<"Enter temperature: ";
        cin>>temp;
        cout<<"Enter weather condition: ";
        cin>>condn;
    }
        friend void generatereport(Weather w);
};
void generatereport(Weather w){
    cout<<"City Name: "<<w.cityname<<endl;
    cout<<"Temperature: "<<w.temp<<endl;
    cout<<"Weather Condition: "<<w.condn<<endl;
    cout<<"Category: ";
    if(w.temp>35)
    cout<<"Very Hot";
    else if(w.temp>20)
    cout<<"Pleasant";
    else
    cout<<"Cool";
}
int main(){
    Weather w;
    w.input();
    generatereport(w);
    return 0;
}