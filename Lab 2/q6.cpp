#include <iostream>
using namespace std;

//defining class Time with Hours and Minutes as data members and input time, add time and display as member functions
class Time{
    int Hours[3], Minutes[3];

    public:
    //accepting 2 values of time
    void inputtime(){
        cout<<"First time value-\n";
        cout<<"Enter hours: ";
        cin>>Hours[0];
        cout<<"Enter minutes: ";
        cin>>Minutes[0];
        cout<<"Second time value-\n";
        cout<<"Enter hours: ";
        cin>>Hours[1];
        cout<<"Enter minutes: ";
        cin>>Minutes[1];
    }
    //adding the two time values accepted
    void addtime(){
        Hours[2]=Hours[0]+Hours[1];
        Minutes[2]=Minutes[0]+Minutes[1];
        if(Minutes[2]>=60)
            {
                Hours[2]+=Minutes[2]/60;
                Minutes[2]=Minutes[2]%60;
            }
    }
    //displaying the total time after addition
    void display(){
        cout<<"\nResulting time: "<<Hours[2]<<" hr "<<Minutes[2]<<" min"<<endl;
    }
};

//main function to create object and call input time, add time and display the total time
int main(){
    Time t;
    t.inputtime();
    t.addtime();
    t.display();
    return 0;
}