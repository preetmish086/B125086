#include <iostream>
using namespace std;

class Camera{
    private:
    string brand;
    string model;
    int mp;
    int cap;
    public:
    void input(){
        cout<<"Enter brand: ";
        cin>>brand;
        cout<<"Model: ";
        cin>>model;
        cout<<"MegaPixels: ";
        cin>>mp;
        cout<<"Storage Capacity: ";
        cin>>cap;
    }
    friend void compareCamera(Camera c1, Camera c2);
};
void compareCamera(Camera c1, Camera c2){
    cout<<"\n\n-----Details of Better Camera-----"<<endl;
    if(c1.mp>c2.mp)
    {
        cout<<"Brand: "<<c1.brand<<endl;
        cout<<"Model: "<<c1.model<<endl;
        cout<<"MegaPixels: "<<c1.mp<<endl;
        cout<<"Storage Capacity: "<<c1.cap<<endl;
    }
    else if(c2.mp>c1.mp)
    {
        cout<<"Brand: "<<c2.brand<<endl;
        cout<<"Model: "<<c2.model<<endl;
        cout<<"MegaPixels: "<<c2.mp<<endl;
        cout<<"Storage Capacity: "<<c2.cap<<endl;
    }
    else
    {
        if(c1.cap>c2.cap)
        {
            cout<<"Brand: "<<c1.brand<<endl;
            cout<<"Model: "<<c1.model<<endl;
            cout<<"MegaPixels: "<<c1.mp<<endl;
            cout<<"Storage Capacity: "<<c1.cap<<endl;
        }
        else
        {
            cout<<"Brand: "<<c2.brand<<endl;
            cout<<"Model: "<<c2.model<<endl;
            cout<<"MegaPixels: "<<c2.mp<<endl;
            cout<<"Storage Capacity: "<<c2.cap<<endl;
        }
    }
}
int main(){
    Camera c1, c2;
    cout<<"1st Camera"<<endl;
    c1.input();
    cout<<"2nd Camera"<<endl;
    c2.input();
    compareCamera(c1,c2);
    return 0;
}