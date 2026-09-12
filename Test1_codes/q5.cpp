#include <iostream>
using namespace std;

class Trip{
    int id;
    double dist;
    double baseFare;
public:
    Trip(int i, double d, double base){
        id = i;
        dist = d;
        baseFare = base;
    }
    double fare(){
        return baseFare + dist * 10;
    }
    double fare(int waitingTime){
        return fare() + waitingTime * 2;
    }
    double fare(int waitingTime, int discount){
        double total = fare(waitingTime);
        return total - (total * discount / 100.0);
    }
    friend void compareFare(Trip &t1, Trip &t2);
};
void compareFare(Trip &t1, Trip &t2){
    double fare1 = t1.fare();
    double fare2 = t2.fare();
    if (fare1 < fare2)
        cout << "Trip " << t1.id << " is cheaper.\n";
    else if (fare2 < fare1)
        cout << "Trip " << t2.id << " is cheaper.\n";
    else
        cout << "Both trips have the same fare.\n";
}

int main(){
    int id1, id2;
    double dist1, dist2, base1, base2;

    cout << "Enter Trip 1 id, dist and base fare: ";
    cin >> id1 >> dist1 >> base1;
    cout << "Enter Trip 2 id, dist and base fare: ";
    cin >> id2 >> dist2 >> base2;

    Trip *t1 = new Trip(id1, dist1, base1);
    Trip *t2 = new Trip(id2, dist2, base2);

    cout << "\nTrip 1 normal fare: " << t1->fare() << endl;
    int waitingTime1, waitingTime2, discount;
    cout << "Enter waiting time for Trip 1: ";
    cin >> waitingTime1;
    cout << "Trip 1 fare with waiting: "<< t1->fare(waitingTime1) << endl;
    cout << "\nEnter waiting time and discount for Trip 2: ";
    cin >> waitingTime2 >> discount;
    cout << "Trip 2 final fare: "<< t2->fare(waitingTime2, discount) << endl;
    compareFare(*t1, *t2);
    delete t1;
    delete t2;
    return 0;
}