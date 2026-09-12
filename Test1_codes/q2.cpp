#include <iostream>
using namespace std;

class Borrower{
    int id;
    int days;
    double fine;
    public:
    Borrower(int i, int d){
        id=i;
        days=d;
        fine=0;
    }
    void calculateFine(){
        fine=days*5;
    }
    void calculateFine(double specialrate){
        fine=days*specialrate;
    }
    void display(){
        cout<<"Borrower id: "<<id<<endl;
        cout<<"Overdue days: "<<days<<endl;
        cout<<"Fine: "<<fine<<endl;
    }
    friend void compareFine(Borrower &a, Borrower &b);
};

void compareFine(Borrower &a, Borrower &b){
    if(a.fine>b.fine)
        cout<<"Borrower "<<a.id<<" has a greter fine"<<endl;
    else if(b.fine>a.fine)
    cout<<"Borrower "<<b.id<<" has a greater fine"<<endl;
    else
    cout<<"Both borrowers have equal fines"<<endl;
}
int main(){
    int aid, ad, bid, bd, sr;
    cout<<"Enter borrower 1 id and overdue days: ";
    cin>>aid>>ad;
    cout<<"Enter borrower 2 id nd overdue days: ";
    cin>>bid>>bd;
    cout<<"Enter special rate: ";
    cin>>sr;
    Borrower *a=new Borrower(aid, ad);
    Borrower *b=new Borrower(bid, bd);
    a->calculateFine();
    b->calculateFine(sr);
    a->display();
    b->display();
    cout<<endl;
    compareFine(*a, *b);
    delete a;
    delete b;
    return 0;
}