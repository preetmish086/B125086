#include <iostream>
using namespace std;

class Fraction{
    private:
    int num;
    int dnum;
    public:
    //to simplify the fraction
    void simplify(){
        int i=(num>dnum)?dnum:num;
        for(; i>1; i--){
            if(num%i==0 && dnum%i==0){
                num/=i;
                dnum/=i;
            }
        if(dnum<0)
        {
            num=-num;
            dnum=-dnum;
        }
        }
    }
    //constructor with default values
    Fraction(int n=0, int d=1){
        num=n;
        dnum=d;
        simplify();
    }
    //overloading + operator
    Fraction operator+(Fraction f){
        return Fraction(num*f.dnum + f.num*dnum, dnum*f.dnum);
    }
    //overloading - operator
    Fraction operator-(Fraction f){
        return Fraction(num*f.dnum - f.num*dnum, dnum*f.dnum);
    }
    void display(){
        cout<<num<<"/"<<dnum<<endl;
    }
};

int main(){
    int i,j,k,l;
    cout<<"Enter numerator and denominator of 1st and 2nd fraction: ";
    cin>>i>>j>>k>>l;
    Fraction f1(i,j), f2(k,l);
    cout<<"First fraction: ";
    f1.display();
    cout<<"Second fraction: ";
    f2.display();
    
    Fraction f3 = f1 + f2; //using overloaded + operator
    cout<<"Addition: ";
    f3.display();
    Fraction f4 = f1 - f2; //using overloaded - operator
    cout<<"Subtraction: ";
    f4.display();

    return 0;
}