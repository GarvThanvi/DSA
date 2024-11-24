#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5, -1);

    //Create an iterator
    vector<int>::iterator it = v.begin();
    while(it != v.end()){
        cout<<*it;
        it++;
    }


    // cout<<*(v.begin());
    return 0;
}