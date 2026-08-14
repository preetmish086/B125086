#include <iostream>
using namespace std;

//defining class book with data members book id, book title, author name, price and member functions to accept and display details
class Book{
    char id[10];
    char title[20];
    char author[20];
    float price;

    public:
    //to input details from user
    void acceptdetails(){
        cout<<"Enter book id: ";
        cin>>id;
        cout<<"Enter book title: ";
        cin>>title;
        cout<<"Enter author name: ";
        cin>>author;
        cout<<"Enter price: ";
        cin>>price;
    }
    //to display the details entered by user
    void display()
    {
        cout<<"Book ID \t Title \t Author \t Price"<<endl;
        cout<<id<<"\t\t"<<title<<"\t\t"<<author<<"\t\t"<<price<<endl;
    }
};

//main function to create dynamic object, call the member functions and release the dynamically allocated oject.
int main(){
    Book *b = new Book;
    b->acceptdetails();
    b->display();
    delete b;
    return 0;
}