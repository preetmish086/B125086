#include <iostream>
using namespace std;

class ParkingFloor{
    int floornum;
    int slots;
    int* occupancy;
    public:
    ParkingFloor(int f, int s){
        floornum = f;
        slots = s;
        occupancy = new int[slots];
        for (int i = 0; i < slots; i++)
            occupancy[i] = 0;
    }
    void reserve(int pos){
        if(pos>=0 && pos<slots && occupancy[pos]==0)
        {
            occupancy[pos]=1;
            cout<<"Slot "<<pos<<" Reserved."<<endl;
        }
        else
        cout<<"Slot cannot be reserved."<<endl;
    }
    void reserve(int pos, int count){
        if(pos<0 || pos+count>slots)
        cout<<"Invalid slot range."<<endl;
        return;
    for(int i=pos; i<pos+count; i++)
    {
        if(occupancy[i]!=0)
        cout<<"Consecutive slots not available."<<endl;
        return;
    }
    for(int i=pos; i<pos+count; i++)
        occupancy[i]=1;
    cout<<count<<" consecutive slots are reserved."<<endl;
    }
    void display() {
        cout << "Floor " << floornum << ": ";
        for (int i = 0; i < slots; i++)
            cout << occupancy[i] << " ";
        cout << endl;
    }
    ~ParkingFloor() {
        delete[] occupancy;
    }
};

int main(){
    int n;
    cout<<"Enter number of floors: ";
    cin>>n;
    ParkingFloor** floors=new ParkingFloor* [n];
    for(int i=0; i<n; i++){
        int slots;
        cout<<"Enter slots for the floor "<<i+1<<endl;
        cin>>slots;
        floors[i] = new ParkingFloor(i + 1, slots);
    }
    int floor, choice, pos, count;
    cout<<"Enter floor number to reserve slots: ";
    cin>>floor;
    cout<<"1. Reserve single slot\n2. Reserve consecutive slots\nEnter your choice: ";
    cin>>choice;
    cout<<"Enter starting slot position: ";
    cin>>pos;
    if (choice == 1){
        floors[floor - 1]->reserve(pos);
    } 
    else{
        cout << "Enter number of consecutive slots: ";
        cin >> count;
        floors[floor - 1]->reserve(pos, count);
    }
    for (int i = 0; i < n; i++) {
        floors[i]->display();
        delete floors[i];
    }

    delete[] floors;
    return 0;
}