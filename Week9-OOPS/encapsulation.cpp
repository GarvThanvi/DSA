#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
    //Attributes
    int id;
    int age;
    string name;
    int nos; 
    float *gpa;
    string gf;

public:


    // //Constructor
    // Student(){
    //     cout << "Student ka default constructor called" << endl;
    // }

    //Parameterised Constructor
    Student(int id, int age, string name, int nos, float gpa, string gf){
        cout << "Student ka parameterised constructor called" << endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        //dynamic aloocation of object
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    //Copy Constructor
    Student(const Student &srcobj){
        cout << "Student ka copy constructor called" << endl;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->nos = srcobj.nos;
    }

    //Methods

    void setGpa(float a){
        *this->gpa = a;
    }

    int getAge(){
        return this->age;
    }
    float getGpa(){
        return *this->gpa;
    }

    void study()
    {
        cout << this->name << "Studying" << endl;
    }

    void sleep(){
        cout << this->name << "Sleeping" << endl;
    }

    void bunk(){
        cout << this->name << "Bunking" << endl;
    }
 
private: 
    void gfchatting(){
        cout << this->gf << "Chatting" << endl;
    }  
public:      

    //Destructor
    ~Student(){
        cout << "Student Default dtor called" << endl;
        delete this->gpa;
    }
};

int main(){
    //Dynamic Allocation or Student pointer
    Student *A = new Student(1, 14, "Babban", 7, 9.8, "Gaggan");
    // cout << A->name << endl;
    // cout << A->gpa << endl;
    A->study();
    delete A; //you have to delete for dynamic allocation
    //WE CANT ACCES PRIVATE METHODS OR ATTRIBUTES
    Student B(2,15,"Garv",7,9.9,"Someone");
    
    cout << B.getAge()<<endl;
    B.setGpa(9.0);
    cout << B.getGpa()<<endl;
    return 0;
}