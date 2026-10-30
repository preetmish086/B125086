#include <iostream>
using namespace std;

class LibraryAccess{
    protected:
    int books;
    public:
    LibraryAccess(int b){
        books = b;
    }
};

class LabAccess{
    protected:
    int pending;
    public:
    LabAccess(int p){
        pending = p;
    }
};

class StudentAccess:public LibraryAccess, public LabAccess{
    public:
    StudentAccess(int b, int p){}
    void display(){
        cout<<"Books borrowed: "<<books<<"\nPending submissions: "<<pending<<endl;
        if(books<=5 && pending == 0)
        cout<<"Full Resource Access Granted"<<endl;
        else
        cout<<"Full Resource Access Denied"<<endl;
    }
};

int main(){
    StudentAccess s(3,0);
    s.display();
    return 0;
}