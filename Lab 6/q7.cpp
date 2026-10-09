#include <iostream>
using namespace std;

class InventoryItem{
    private:
    int id;
    int p;
    int q;
    public:
    //constructor to initialize the inventory item
    InventoryItem(int productid, int price, int quantity){
        id=productid;
        p=price;
        q=quantity;
    }
    //overloading + operator to add two inventory items
    InventoryItem operator+(InventoryItem i){
        if(id==i.id && p==i.p)
            return InventoryItem(id,p,q+i.q);
        else
            return InventoryItem(-1,-1,-1);
    }
    void display(){
        if(id==-1 && p==-1 && q==-1)
            cout<<"Items cannot be added."<<endl;
        else
            cout<<"Product ID: "<<id<<", Price: "<<p<<", Quantity: "<<q<<endl;
    }
};

int main(){
    int id1, id2, p1, p2, q1, q2;
    cout<<"Enter product ID, price and quantity of 1st item: ";
    cin>>id1>>p1>>q1;
    cout<<"Enter product ID, price and quantity of 2nd item: ";
    cin>>id2>>p2>>q2;
    InventoryItem i1(id1,p1,q1), i2(id2,p2,q2);
    
    InventoryItem i3 = i1 + i2; //using overloaded + operator
    cout<<"Result: ";
    i3.display();

    return 0;
}