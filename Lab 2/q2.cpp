#include <iostream>
using namespace std;

//defining class square with data member side and member functions to read side, calculate area and perimeter, and display the results
class Square{
    int side;
    
    public:
    //taking input of side
    void readside(){
        cout<<"Enter side of square: ";
        cin>>side;
    }
    //calculating area of square
    int sarea(){
        int area=side*side;
        return area;
    }
    //calculating perimeter of square
    int speri(){
        int peri=4*side;
        return peri;
    }
    //displaying the area and perimeter of square
    void display(int a, int p){
        cout<<"Area of square: "<<a<<endl;
        cout<<"Perimeter of square: "<<p<<endl;
    }
};

//main function to create object of class square and call member functions to read side, calculate area and perimeter, and display the results
int main(){
    Square s;
    s.readside();
    s.display(s.sarea(), s.speri());
    return 0;
}