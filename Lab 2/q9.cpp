#include <iostream>
using namespace std;

//defining class CricketPlayer with player name, number of matches played and total runs scored as data members and member functions to accept details, calculate average runs per match and display report
class CricketPlayer{
    string name;
    int matches;
    int totalruns;

    public:
    //accepting details
    void acceptdetails(){
        cout<<"Enter player name: ";
        cin>>name;
        cout<<"Enter number of matches played: ";
        cin>>matches;
        cout<<"Enter total runs scored: ";
        cin>>totalruns;
    }
    //calculating batting average
    float avg(){
        float average=totalruns/matches;
        return average;
    }
    //displaying report
    void report(float avg){
        cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"Player name\t Matches played\t Total runs scored\t Average runs per match\n"<<endl;
        cout<<name<<"\t\t "<<matches<<"\t\t "<<totalruns<<"\t\t\t "<<avg<<endl;
        if(avg>=50)
            cout<<"Excellent Performance";
        else if(avg>=35)
            cout<<"Good Performance";
        else if(avg>=20)
            cout<<"Average Performance";
        else
            cout<<"Poor Performance";
    }
};

//main function to declare object and call member functions to accept details, calculate average and display report
int main(){
    CricketPlayer cp;
    cp.acceptdetails();
    cp.report(cp.avg());
    return 0;
}