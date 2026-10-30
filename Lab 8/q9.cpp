#include <iostream>
using namespace std;

class BackupPolicy{
    public:
    virtual void calculateStorage(double size){
        cout<<"Backup Storage"<<endl;
    }
};

class FullBackup:public BackupPolicy{
    public:
    void calculateStorage(double size){
        cout<<"Full Backup Storage: "<<size<<" MB"<<endl;
    }
};

class IncrementalBackup:public BackupPolicy{
    public:
    void calculateStorage(double size){
        double storage=size*0.25+50;
        cout<<"Incremental Backup Storage: "<<storage<<" MB"<<endl;
    }
};

int main(){
    FullBackup f;
    IncrementalBackup i;

    BackupPolicy *b;
    b=&f;
    b->calculateStorage(200);
    b=&i;
    b->calculateStorage(200);

    return 0;
}