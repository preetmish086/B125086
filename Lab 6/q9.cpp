#include <iostream>
using namespace std;

class Matrix{
    int a[2][2];
    public:
    //constructor to initialize the matrix
    Matrix(int x, int y, int z, int w){
        a[0][0]=x;
        a[0][1]=y;
        a[1][0]=z;
        a[1][1]=w;
    }
    //overloading + operator to add two matrices
    Matrix operator+(Matrix m){
        return Matrix(a[0][0]+m.a[0][0],
                      a[0][1]+m.a[0][1],
                          a[1][0]+m.a[1][0],
                              a[1][1]+m.a[1][1]);
    }
    void display(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    int x1,y1,z1,w1,x2,y2,z2,w2;
    cout<<"Enter elements of 1st matrix (2x2): ";
    cin>>x1>>y1>>z1>>w1;
    cout<<"Enter elements of 2nd matrix (2x2): ";
    cin>>x2>>y2>>z2>>w2;
    Matrix m1(x1,y1,z1,w1), m2(x2,y2,z2,w2);
    
    Matrix m3 = m1 + m2; //using overloaded + operator
    cout<<"Resultant Matrix: "<<endl;
    m3.display();

    return 0;
}