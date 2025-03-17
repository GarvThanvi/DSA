#include<iostream>
using namespace std;

class Vehicle{
    public:
    string name;
    string model;
    int noOfTyres;

    Vehicle(string name, string model, int noOfTyes){
        cout << "Inside Vehciel CTor" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyes;
    }

    public:
    void start_engine(){
        cout << "Engine is starting " << this->name << " " << this->model << endl; 
    }

    void stop_engine(){
        cout << "Engine is Stopping" << this->name << " " << this->model << endl;
    }

    ~Vehicle(){
        cout << "Dtor called for " << this->name << endl;
    }
};

class Car : public Vehicle{
    public:
    int noOfDoors;
    string transmissionType;

    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres){
        cout << "Inside Car Ctor" << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }

    void startAC(){
        cout << "AC has started " << this->name << endl;
    }

    ~Car(){
        cout << "car dtor called" << endl; 
    }
};

int main(){
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    return 0;
}

//FOR SINGLE, MULTIPLE AND COMPLEX EXAMPLES OF INHERITANCE WATCH THE VIDEO ONLY