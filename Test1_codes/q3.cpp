#include <iostream>
using namespace std;

class SensorGrid{
    int n;
    double* temp;

    public:
    SensorGrid(int size){
        n = size;
        temp = new double[n];
    }
    void enter(){
        cout<<"Enter temperature readings: "<<endl;
        for(int i=0; i<n; i++)
            cin>>temp[i];
    }
    void display(){
        cout<<"Temperature Readings: "<<endl;
        for(int i=0; i<n; i++)
        cout<<temp[i]<<" ";
        cout<<endl;
    }
    void replace(int pos, double value){
        if(pos>=0 && pos<n)
            temp[pos] = value;
        else
            cout<<"Invalid position"<<endl;
    }
    double average(){
        double sum=0;
        for(int i=0; i<n; i++)
        sum+=temp[i];
        return sum/n;
    }
    friend void compare(SensorGrid &a, SensorGrid &b);
    ~SensorGrid() {
      //  delete[] temp;
    }
};
void compare(SensorGrid &a, SensorGrid &b) {
    double avg1=a.average();
    double avg2=b.average();
    if(avg1>avg2)
    cout<<"First has greater avg"<<endl;
    else if(avg2>avg1)
    cout<<"Second has greater avg"<<endl;
    else
    cout<<"Both have same avg"<<endl;
}
int main(){
    int na, nb;
    cout<<"Enter no. of reading for grid 1: ";
    cin>>na;
    cout<<"Enter no. of readings for grid 2: ";
    cin>>nb;
    SensorGrid g1(na);
    SensorGrid g2(nb);
    cout<<"Enter details----------"<<endl;
    g1.enter();
    g2.enter();
    cout<<"Display details---------"<<endl;
    g1.display();
    g2.display();
    int p; double v;
    cout<<"Enter position and value to replace in grid 1: ";
    cin>>p>>v;
    g1.replace(p, v);
    cout<<"Enter position and value to replace in grid 2: ";
    cin>>p>>v;
    g2.replace(p, v);
    cout<<"Display details after replacement---------"<<endl;
    g1.display();  
    g2.display();
    compare(g1,g2);
    return 0;
}