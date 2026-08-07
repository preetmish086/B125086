#include <iostream>
using namespace std;

//defining class temperature with data members Celsius and Farenheit and member functions to read Celsius, convert to Farenheit, and display the results
class Temperature{
    float Celsius, Farenheit;
    
    public:
    //taking temperature in celcius as input
    void readcelcius(){
        cout<<"Enter temperature in celsius: ";
        cin>>Celsius;
    }
    //converting to farenheit
    void tofarenheit(){
        Farenheit=(Celsius*9/5)+32;
    }
    //displaying the temperatures in celcius and farenheit
    void display(){
        cout<<"Temperature in celsius: "<<Celsius<<endl;
        cout<<"Temperature in farenheit: "<<Farenheit<<endl;
    }
};

//main function to create object and call member functions to read Celsius, convert to Farenheit, and display the results
int main(){
    Temperature t;
    t.readcelcius();
    t.tofarenheit();
    t.display();
    return 0;
}