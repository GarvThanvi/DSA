#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    for(int i=0; i< v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}

int main(){
    // //DYNAMIC MEMORY ALLOCATION
    // int n;
    // cin>>n;
    // int *arr = new int[n];

    //INITIALIZATION
    vector<int>v;
    // vector<int>v(5,-1) //{-1,-1,-1,-1,-1}
    // vector<int>v{1,2,3,4,5}

    //COPYING A VECTOR
    // vector<int> arr1 = {1,2,3,4,5};
    // vector<int> arr6(arr5);

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
     

    //WE CAN ALSO USE NORMAL PRINTING METHOD LIKE ARRAY
    //ANOTHER PRINTING METHOD
    for(auto it:v){
        cout<<it<<" ";
    }







    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    // cout<<v.size()<<endl<<v.capacity();

    //delete
    v.pop_back();
    print(v);

    return 0;
}