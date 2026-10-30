#include <iostream>
using namespace std;

class TrafficSignal{
    public:
    virtual void getGreenDuration(int count){
        cout<<"Traffic Signal"<<endl;
    }
};

class UrbanSignal:public TrafficSignal{
    public:
    void getGreenDuration(int count){
        int time = 10+2*count;
        if(time>60)
        time=60;
        cout<<"Urban Signal Green Duration: "<<time<<" seconds"<<endl;
    }
};

class HighwaySignal:public TrafficSignal{
    public:
    void getGreenDuration(int count){
        int time=15+3*count;
        if(time>90)
        time =90;
        cout<<"Highway Signal Green Duration: "<<time<<" seconds"<<endl;
    }
};

int main(){
    UrbanSignal u;
    HighwaySignal h;

    TrafficSignal *p;
    p=&u;
    p->getGreenDuration(20);
    p=&h;
    p->getGreenDuration(20);
    return 0;
}