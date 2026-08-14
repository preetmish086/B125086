#include <iostream>
using namespace std;

//defining class employee with data members id, name, salary and member functions to accept and display the details
class Employee{
    public:
    char id[10];
    char name[20];
    float salary;
    //to accept the details
    void accept(){
        cout<<"Enter id, name, salary"<<endl;
        cin>>id>>name>>salary;
    }
    //to display the details
    void display(){
        cout<<"ID: "<<id<<" Name: "<<name<<" Salary= "<<salary<<endl;
    }
};

//main fucntion
int main(){
    int n,p=0;
    cout<<"Enter n: ";
    cin>>n;
    //allocating dynamic memory for the array
    Employee *emp = new Employee [n];
    float max, avg=0, sum=0;
    for(int i=0; i<n; i++)
    {
        emp[i].accept();
        emp[i].display();
        //calculating sum for avg
        sum+=emp[i].salary;
        max=emp[0].salary;
        //finding max
        if(emp[i].salary>max)
        {
            max=emp[i].salary;
            p=i;
        }
    }
    //calculating avg
    avg=sum/n;
    cout<<"Employee with Highest Salary:"<<endl;
    cout<<"ID: "<<emp[p].id<<" Name: "<<emp[p].name<<" Salary= "<<emp[p].salary<<endl;
    //releasing allocated memory
    delete[] emp;
    //preventing dangling pointer
    emp=nullptr;
    return 0;
}