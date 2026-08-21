#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string name;
    string id;
    int count;
    string status;

public:
    void input()
    {
        cout << "Enter exhibit name: ";
        cin >> name;

        cout << "Enter exhibit id: ";
        cin >> id;

        cout << "Enter visitor count: ";
        cin >> count;

        cout << "Enter display status: ";
        cin >> status;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void display(Exhibit &p)
    {
        cout << "Exhibit Name: " << p.name << endl;
        cout << "Exhibit ID: " << p.id << endl;
        cout << "Visitor Count: " << p.count << endl;
        cout << "Display Status: " << p.status << endl;
    }

    void add(Exhibit &p)
    {
        int v;

        cout << "Enter number of visitors to add: ";
        cin >> v;

        p.count += v;

        cout << "Updated Visitor Count: " << p.count << endl;
    }

    void reset(Exhibit &p)
    {
        p.count = 0;

        cout << "Updated Visitor Count: " << p.count << endl;
    }

    void openclose(Exhibit &p)
    {
        int i;

        cout << "Enter 1- OPEN, 0- CLOSE: ";
        cin >> i;

        if (i)
            p.status = "OPEN";
        else
            p.status = "CLOSE";
    }

    void isopen(Exhibit &p)
    {
        if (p.status == "OPEN")
            cout << "Exhibit is currently open" << endl;
        else
            cout << "Exhibit is currently closed" << endl;
    }
};

int main()
{
    Exhibit p;
    MuseumManager pm;

    cout << "-----Input-----" << endl;
    p.input();

    cout << "\n-----Display-----" << endl;
    pm.display(p);

    cout << "\n-----ADD-----" << endl;
    pm.add(p);
    pm.display(p);

    cout << "\n-----RESET VISITOR COUNT-----" << endl;
    pm.reset(p);
    pm.display(p);

    cout << "\n-----Open or Close-----" << endl;
    pm.openclose(p);

    cout << "\n-----Whether currently open or not-----" << endl;
    pm.isopen(p);

    return 0;
}