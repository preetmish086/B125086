#include <iostream>
using namespace std;

class Document{
    public:
    virtual void exportFile(){
        cout<<"Exporting document"<<endl;
    }
};

class pdfdocument:public Document{
    public:
    void exportFile(){
        cout<<"Exporting pdf file"<<endl;
    }
};

class textdocument:public Document{
    public:
    void exportFile(){
        cout<<"Exporting text file"<<endl;
    }
};

class csvdocument:public Document{
    public:
    void exportFile(){
        cout<<"Exporting csv file"<<endl;
    }
};

int main(){
    pdfdocument p;
    textdocument t;
    csvdocument c;

    Document *d;
    d=&p;
    d->exportFile();
    d=&t;
    d->exportFile();
    d=&c;
    d->exportFile();

    return 0;
}