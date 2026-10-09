#include <iostream>
using namespace std;

class Score{
    public:
        int s;

    //constructor to initialize the score
    Score(int score){
        s=score;
    }
    //overloading prefix ++ operator to increment the score
    Score operator++(){
        ++s;
        return *this;
    }
    //overloading postfix ++ operator to increment the score
    Score operator++(int){
        Score temp=*this;
        s++;
        return temp;
    }
    void display(){
        cout<<s<<endl;
    }
};

int main(){
    int s1;
    cout<<"Enter Score: ";
    cin>>s1;
    Score a(s1);
    cout<<endl;
    cout<<"Original Score: ";
    a.display();
    cout<<endl;
    Score b=++a; //using overloaded prefix ++ operator
    cout<<"Prefix result: ";
    b.display();
    cout<<"Score after prefix: ";
    a.display();
    a.s=s1; // Resetting score to original for postfix demonstration
    cout<<endl;
    Score c=a++; //using overloaded postfix ++ operator
    cout<<"Postfix result: ";
    c.display();
    cout<<"Score after postfix: ";
    a.display();

    return 0;
}