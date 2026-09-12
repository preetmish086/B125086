#include <iostream>
using namespace std;

class Inventory{
    int id;
    int items;
    int* quantity;
    public: 
    Inventory(int id, int n){
        id=id;
        items=n;
        quantity=new int[items];
        for(int i=0; i<n; i++)
        quantity[i]=0;
    }
    void enter(){
        cout<<"Enter quantities of items: "<<endl;
        for(int i=0; i<items; i++)
        cin>>quantity[i];
    }
    void display(){
        cout<<"Player ID: "<<id<<endl;
        cout<<"Item quantities: ";
        for(int i=0; i<items; i++)
        cout<<quantity[i]<<" ";
        cout<<endl;
    }
    friend class GameController;
    ~Inventory(){
        delete[] quantity;
    }
};
class GameController{
    public:
    void inspect(Inventory &inv){
        cout<<"Inspecting inventory: "<<endl;
        cout<<"Player id: "<<inv.id<<endl;
        cout<<"Number of items: "<<inv.items<<endl;
        cout<<"Quantities: "<<endl;
        for(int i=0; i<inv.items; i++)
        cout<<inv.quantity[i]<<" ";
        cout<<endl;
    }
    void modify(Inventory &inv, int pos, int newq){
        if(pos>=0 && pos<inv.items){
            inv.quantity[pos]=newq;
            cout<<"Quantity modified successfully"<<endl;
        }
        else
        cout<<"Invalid position"<<endl;
    }
};
int main(){
    int id, n;
    GameController gc;
    cout<<"Enter pLayer id: ";
    cin>>id;
    cout<<"Enter number of items: ";
    cin>>n;
    Inventory *inv=new Inventory(id,n);
    inv->enter();
    cout<<"before modification: "<<endl;
    gc.inspect(*inv);
    int pos, newq;
    cout<<"Enter position and new quantity: ";
    cin>>pos>>newq;
    gc.modify(*inv, pos, newq);
    cout<<"after modification: "<<endl;
    gc.inspect(*inv);
    delete inv;
    return 0;
}