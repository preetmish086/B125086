#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom
{
private:
    string name;
    int count;
    int present;
    string status;

public:
    void input()
    {
        cout << "Enter class name: ";
        cin >> name;

        cout << "Enter total students: ";
        cin >> count;

        cout << "Enter present students: ";
        cin >> present;

        cout << "Enter attendance status: ";
        cin >> status;
    }

    friend class AttendanceManager;
};

class AttendanceManager
{
public:
    void display(Classroom &p)
    {
        cout << "Classroom Name: " << p.name << endl;
        cout << "Total Students: " << p.count << endl;
        cout << "Present: " << p.present << endl;
        cout << "Attendance Status: " << p.status << endl;
    }

    void update(Classroom &p)
    {
        int v;

        cout << "Enter number of present students to add: ";
        cin >> v;

        p.present += v;

        cout << "Updated Present Count: " << p.present << endl;
    }

    void complete(Classroom &p)
    {
        p.status = "Complete";
        cout << "Attendance marked as completed." << endl;
    }

    void displaystat(Classroom &p)
    {
        cout << "Attendance Status: " << p.status << endl;
    }

    void absent(Classroom &p)
    {
        cout << "No. of absent students = "
             << p.count - p.present << endl;
    }
};

int main()
{
    Classroom p;
    AttendanceManager pm;

    cout << "-----Input-----" << endl;
    p.input();

    cout << "\n-----Display-----" << endl;
    pm.display(p);

    cout << "\n-----UPDATE NO. OF PRESENT STUDENTS-----" << endl;
    pm.update(p);

    cout << "\n-----MARK ATTENDANCE COMPLETE-----" << endl;
    pm.complete(p);

    cout << "\n-----IS ATTENDANCE COMPLETE-----" << endl;
    pm.displaystat(p);

    cout << "\n-----DISPLAY ABSENTEES-----" << endl;
    pm.absent(p);

    return 0;
}