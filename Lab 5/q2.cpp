#include <iostream>
using namespace std;

float area(int side){
    return (side*side);
}
float area(int length, int breadth){
    return (length*breadth);
}
float area(double radius){
    return (3.14*radius*radius);
}
int main(){
    int length, breadth, side;
    double radius;
    cout<<"Enter side of square: ";
    cin>>side;
    cout<<"Enter length and breadth of the rectangle: ";
    cin>>length>>breadth;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    cout<<"Areas---"<<endl;
    cout<<"Square: "<<area(side)<<endl;
    cout<<"Rectangle: "<<area(length, breadth)<<endl;
    cout<<"Circle: "<<area(radius)<<endl;
    return 0;
}