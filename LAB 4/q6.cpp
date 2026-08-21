#include <iostream>
using namespace std;

class PrinterManager;

class Printer{
private:
    string name;
    int pages;
    int level;
    string status;

public:
    void input()
    {
        cout << "Enter printer name: ";
        cin >> name;

        cout << "Enter no. of pages printed: ";
        cin >> pages;

        cout << "Enter Ink Level: ";
        cin >> level;

        cout << "Enter power status: ";
        cin >> status;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:
    void display(Printer &p)
    {
        cout << "Printer Name: " << p.name << endl;
        cout << "Number of Pages Printed: " << p.pages << endl;
        cout << "Ink Level: " << p.level << endl;
        cout << "Power Status: " << p.status << endl;
    }

    void on(Printer &p)
    {
        p.status = "ON";
    }

    void off(Printer &p)
    {
        p.status = "OFF";
    }

    void checkink(Printer &p)
    {
        cout << "Ink Level = " << p.level << endl;
    }

    void resetpg(Printer &p)
    {
        p.pages = 0;
    }
};

int main()
{
    Printer p;
    PrinterManager pm;

    cout << "-----Input-----" << endl;
    p.input();

    cout << "\n-----ON-----" << endl;
    pm.on(p);
    pm.display(p);

    cout << "\n-----OFF-----" << endl;
    pm.off(p);
    pm.display(p);

    cout << "\n-----Check Ink Level-----" << endl;
    pm.checkink(p);

    cout << "\n-----Reset Pages-----" << endl;
    pm.resetpg(p);
    pm.display(p);

    return 0;
}