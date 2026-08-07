#include <iostream>
using namespace std;

//defining class MovieTicket with movie name, ticket price and number of tickets as data members and member functions to accept details, calculate total price and display details
class MovieTicket{
    string name;
    float price;
    int num;

    public:
    //user input of details
    void acceptdetails(){
        cout<<"Enter movie name: ";
        cin>>name;
        cout<<"Enter ticket price: ";
        cin>>price;
        cout<<"Enter number of tickets: ";
        cin>>num;
    }
    //calculating total price
    float calculatetotal(){
        float total=price*num;
        return total;
    }
    //displaying details
    void display(float total){
        cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"Movie name\t Ticket price\t Number of tickets\t Total amount\n"<<endl;
        cout<<name<<"\t "<<price<<"\t\t "<<num<<"\t\t\t "<<total<<endl;
        cout<<"---------------------------------------------------------------------------"<<endl;
    }
};

//main function to create object and call member functions to accept details, calculate total bill and display details
int main(){
    MovieTicket mv;
    mv.acceptdetails();
    mv.display(mv.calculatetotal());
    return 0;
}