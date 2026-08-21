#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    int num;
    string name;
    string status;
    float km;

public:
    void input()
    {
        cout << "Enter vehicle number: ";
        cin >> num;

        cout << "Enter owner name: ";
        cin >> name;

        cout << "Enter service due status: ";
        cin >> status;

        cout << "Enter last service kilometer: ";
        cin >> km;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void display(VehicleService &p)
    {
        cout << "Vehicle Number: " << p.num << endl;
        cout << "Owner Name: " << p.name << endl;
        cout << "Service Due Status: " << p.status << endl;
        cout << "Last Service Kilometres: " << p.km << endl;
    }

    void complete(VehicleService &p)
    {
        p.status = "Complete";
        cout << "Updated Service Status: " << p.status << endl;
    }

    void updatekm(VehicleService &p)
    {
        cout << "Enter updated last service km: ";
        cin >> p.km;

        cout << "Updated Last Service Kilometres: " << p.km << endl;
    }

    void ifservice(VehicleService &p)
    {
        cout << "Service Status: " << p.status << endl;
        cout << "Last Service Kilometres: " << p.km << endl;

        if (p.status == "Due" || p.status == "due")
            cout << "Service Required" << endl;
        else
            cout << "Service Not Required" << endl;
    }
};

int main()
{
    VehicleService p;
    ServiceManager pm;

    cout << "-----Input-----" << endl;
    p.input();

    cout << "\n-----Display-----" << endl;
    pm.display(p);

    cout << "\n-----Complete Service-----" << endl;
    pm.complete(p);

    cout << "\n-----UPDATE LAST SERVICE KILOMETRES-----" << endl;
    pm.updatekm(p);

    cout << "\n-----WHETHER VEHICLE REQUIRES SERVICING-----" << endl;
    pm.ifservice(p);

    return 0;
}