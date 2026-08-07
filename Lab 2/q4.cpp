#include <iostream>
using namespace std;

//defining class HotelRoom with data members room number, guest name, number of days stayed and cost per day and member functions to accept details, calculate total rent and display the results
class HotelRoom{
    int rno;
    string name;
    int days;
    double cperday;

    public:
    //user input of guest details
    void acceptdetails(){
        cout<<"Enter room number: ";
        cin>>rno;
        cout<<"Enter guest name: ";
        cin>>name;
        cout<<"Enter number of days stayed: ";
        cin>>days;
        cout<<"Enter cost per day: ";
        cin>>cperday;
    }
    //calculating total rent
    int calculatetotrent(){
        int totalrent=days*cperday;
        return totalrent;
    }
    //displaying total rent
    void display(int totalrent){
        cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"Room number\t Guest name\t Days stayed\t Cost per day\t Total rent\n"<<endl;
        cout<<rno<<"\t\t "<<name<<"\t\t "<<days<<"\t\t "<<cperday<<"\t\t "<<totalrent<<"\t\t"<<endl;
        cout<<"---------------------------------------------------------------------------"<<endl;
    }
};

//main function to create object and call member functions to accept details, calculate total rent and display details
int main(){
    HotelRoom h;
    h.acceptdetails();
    h.display(h.calculatetotrent());
    return 0;
}