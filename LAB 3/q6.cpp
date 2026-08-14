#include <iostream>
using namespace std;

//defining class product with data members product id, product name, price, quantity and total product cost and member functions to accept details, calculate total product cost and display
class Product{
    public:
    char id[10];
    char name[20];
    float price;
    int quantity;
    float pcost;
    //to input details from user and calculate total product cost
    void acceptdetails(){
        cout<<"Enter product id: ";
        cin>>id;
        cout<<"Enter product name: ";
        cin>>name;
        cout<<"Enter price: ";
        cin>>price;
        cout<<"Enter quantity: ";
        cin>>quantity;
        pcost=price*quantity;
    }
    //to display the details entered by user as well as the total product cost
    void display()
    {
        cout<<"Product ID \t Name \t Price \t Quantity \t Total Product Cost "<<endl;
        cout<<id<<"\t\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t"<<pcost<<endl;
    }
};

//main function to dynamically allocate memory for n product objects, call member functions and also calculate and display the total inventory cost 
int main(){
    int n;
    float totalinventoryvalue=0;
    cout<<"Enter no. of products: ";
    cin>>n;
    //dynamically allocating memory
    Product *prods = new Product [n];
    for(int i=0; i<n; i++)
    {
        prods[i].acceptdetails();
        totalinventoryvalue += prods[i].pcost;
        prods[i].display();
    }
    cout<<"Total Inventory Value= "<<totalinventoryvalue;
    //releasing dynamically allocated memory
    delete[] prods;
    return 0;
}