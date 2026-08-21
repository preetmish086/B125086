#include <iostream>
using namespace std;

class EventParticipant{
    private:
    string name;
    int age;
    string status;
    public:
    void input(){
        cout<<"Enter Participant Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Registration Status(Active or Inactive): ";
        cin>>status;
    }
    friend void verifyParticipant(EventParticipant e); 
};
void verifyParticipant(EventParticipant e){
    cout<<"\n\n-----Participant Details-----"<<endl;
    cout<<"Name: "<<e.name<<endl;
    cout<<"Age: "<<e.age<<endl;
    cout<<"Registration Status: "<<e.status<<endl;
    if(e.age<18||e.status=="Inactive"||e.status=="inactive")
    cout<<"Not Eligible";
    else
    cout<<"Eligible";
}
int main(){
    EventParticipant e;
    e.input();
    verifyParticipant(e);
    return 0;
}