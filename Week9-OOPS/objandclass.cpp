#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
    //Attributes
    int id;
    int age;
    string name;
    int nos; 
    float *gpa;

    // //Constructor
    // Student(){
    //     cout << "Student ka default constructor called" << endl;
    // }

    //Parameterised Constructor
    Student(int id, int age, string name, int nos, float gpa){
        cout << "Student ka parameterised constructor called" << endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        //dynamic aloocation of object
        this->gpa = new float(gpa);
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

    //Destructor
    ~Student(){
        cout << "Student Default dtor called" << endl;
        delete this->gpa;
    }
};

int main(){
    // Student A;
    // A.id = 1;
    // A.age = 20;
    // A.name = "Ranu";
    // A.nos = 6;

    // A.study();

    // Student A(1,15,"Rahul",5); //Gets Defined in Stack
    // Student B(2,20,"Rohan",6);
    // cout << A.name << " " << B.nos << endl;
    // A.bunk();

    // //COpy Constructor
    // Student C = A; //Another way Student C(A)
    // cout << C.name;

    //Dynamic Allocation or Student pointer
    Student *A = new Student(1, 14, "Babban", 7, 9.8);
    cout << A->name << endl;
    cout << A->gpa << endl;
    A->study();
    delete A; //you have to delete for dynamic allocation
    return 0;
}