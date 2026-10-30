#include <iostream>
using namespace std;

class Candidate{
    protected:
    int id;
    float attendance;
    public:
    Candidate(int i, float a){
        id=i;
        attendance=a;
    }
};

class RegularCandidate:public Candidate{
    public:
    RegularCandidate(int i, float a): Candidate(i,a){}
    void check(){
        cout<<"Regular Candidate ID: "<<id<<endl;
        if(attendance>=75)
        cout<<"Eligible"<<endl;
        else
        cout<<"Not eligible"<<endl;
    }
};

class ReappearCandidate:public Candidate{
    public:
    ReappearCandidate(int i, float a):Candidate(i,a){}
    void check(){
        cout<<"Reappear Candidate ID: "<<id<<endl;
        if(attendance>=60)
        cout<<"Eligible"<<endl;
        else
        cout<<"Not eligible"<<endl;
    }
};

int main(){
    RegularCandidate r(86, 93);
    ReappearCandidate p(102, 65);
    r.check();
    p.check();

    return 0;
}