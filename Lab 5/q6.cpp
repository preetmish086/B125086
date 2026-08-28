#include <iostream>
using namespace std;

int information(char arr[]){
    int length=0;
    while(arr[length]!='\0')
    length++;
    return length;
}
int information(char str[], char ch)
{
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        count++;
    }
    return count;
}
int information(char str[], char ch, int k)
{
    int count=0;
    for(int i=0; i<k && str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        count++;
    }
    return count;
}
int main(){
    char str[100], ch;
    int k;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Length= "<<information(str)<<endl;
    cout<<"Enter character to count: ";
    cin>>ch;
    cout<<"Total occurences= "<<information(str, ch)<<endl;
    cout<<"Enter k: ";
    cin>>k;
    cout<<"Occurences in the first "<<k<<" elements= "<<information(str, ch, k)<<endl;
    return 0;
}