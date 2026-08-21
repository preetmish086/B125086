#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet
{
private:
    string name;
    float balance;
    string status;

public:
    void input()
    {
        cout << "Enter user name: ";
        cin >> name;

        cout << "Enter balance: ";
        cin >> balance;

        cout << "Enter wallet status: ";
        cin >> status;
    }

    friend class WalletManager;
};

class WalletManager
{
public:
    void display(DigitalWallet &p)
    {
        cout << "User Name: " << p.name << endl;
        cout << "Balance: " << p.balance << endl;
        cout << "Status: " << p.status << endl;
    }

    void add(DigitalWallet &p)
    {
        float v;

        cout << "Enter balance to add: ";
        cin >> v;

        p.balance += v;

        cout << "Updated Balance: " << p.balance << endl;
    }

    void deduct(DigitalWallet &p)
    {
        float amt;

        cout << "Enter amount to be deducted: ";
        cin >> amt;

        if (amt <= p.balance)
        {
            p.balance -= amt;
            cout << "Updated Balance = " << p.balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    void disable(DigitalWallet &p)
    {
        p.status = "Disabled";
        cout << "Wallet Disabled" << endl;
    }

    void stat(DigitalWallet &p)
    {
        cout << "Wallet Status: " << p.status << endl;
    }
};

int main()
{
    DigitalWallet p;
    WalletManager pm;

    cout << "-----Input-----" << endl;
    p.input();

    cout << "\n-----Display-----" << endl;
    pm.display(p);

    cout << "\n-----ADD-----" << endl;
    pm.add(p);

    cout << "\n-----DEDUCT-----" << endl;
    pm.deduct(p);

    cout << "\n-----DISABLE-----" << endl;
    pm.disable(p);

    cout << "\n-----CURRENT STATUS-----" << endl;
    pm.stat(p);

    return 0;
}