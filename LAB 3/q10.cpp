#include <iostream>
using namespace std;

//main function
int main(){
    int m,n;
    cout<<"No. of Rows and Columns of the matrices: ";
    cin>>m>>n;
    //dynamically allocating space for the 2D matrices
    int **A = new int*[m];
    for(int i=0; i<m; i++)
    {
        A[i]=new int[n];
    }
    int **B = new int*[m];
    for(int i=0; i<m; i++)
    {
        B[i]=new int[n];
    }
    int **C = new int*[m];
    for(int i=0; i<m; i++)
    {
        C[i]=new int[n];
    }
    //taking input for 1st matrix
    cout<<"Enter elements of 1st matrix:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        cin>>A[i][j];
    }
    //taking input for 2nd matrix
    cout<<"Enter elements of 2nd matrix:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        cin>>B[i][j];
    }
    //finding sum of the 2 matrices
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        C[i][j]=A[i][j]+B[i][j];
    }
    //printing the resultant matrix
    cout<<"Resultant matrix:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        cout<<C[i][j]<<" ";
        cout<<endl;
    }
    //releasing the allocated memory
    for(int i=0; i<m; i++)
    {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C; 
    return 0;
}