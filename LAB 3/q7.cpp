#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int n, v=0, c=0, d=0, s=0;
    cout<<"Enter size of array: ";
    cin>>n;
    //dynamically allocating memory to char array
    char *ch=new char[n+1];
    cin.ignore();
    cout<<"Enter a string of size "<<n<<endl;
    cin.getline(ch, n+1);
    for(int i=0; ch[i]!='\0'; i++)
    {
        //checking for space
        if(ch[i] == ' ')
        s++;
        //checking for digit
        else if(std::isdigit(ch[i]))
        d++;
        //checking for alphabet
        else if(isalpha(ch[i]))
        {
            ch[i]=tolower(ch[i]);
            //checking for vowel
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
            v++;
            //consonant
            else
            c++;
        }
    }
    cout<<"Number of:\n";
    cout<<"Vowels= "<<v<<" Consonants= "<<c<<" Digits= "<<d<<" Spaces= "<<s<<endl;
    //releasing dynamically allocated space
    delete[] ch;
    return 0;
}