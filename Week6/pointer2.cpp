#include<iostream>
using namespace std;

int main(){
    //integer in stack memory
    int a = 10;

    //integer in heap memory
    int *p = new int;
    *p = 20;
    cout << *p << endl;

    delete p;

    //array heap memory
    int* brr = new int[5];
    cout<<brr[0]<<brr[1]<<brr[2]<<endl;

    //2d array heap memory
    int** arr= new int*[4];
    for(int i=0; i<4; i++){
        arr[i] = new int[3];
    }
    
    new int*[10];
    return 0;
}