#include <iostream>
using namespace std;

class UserAccount{
    private:
    char username[20];
    int attempts;
    string status;
    public:
    void input(){
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter login attempts: ";
        cin>>attempts;
        cout<<"Enter account status: ";
        cin>>status;
    }
    friend void checkAccount(UserAccount u);
};
void checkAccount(UserAccount u){
    cout<<"\n-----------Account Details-----------"<<endl;
    cout<<"Username: "<<u.username<<endl;
    cout<<"Account Status: "<<u.status<<endl;
    cout<<"Login Attempts: "<<u.attempts<<endl;
    if(u.attempts>=3)
    cout<<"Account Locked";
    else
    cout<<"Account Active";
}
int main(){
    UserAccount u;
    u.input();
    checkAccount(u);
    return 0;
}