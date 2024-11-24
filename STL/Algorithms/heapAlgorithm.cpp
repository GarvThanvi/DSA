#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    make_heap(v.begin(), v.end()); //makes a max heap

    v.push_back(99); //pushed 99
    push_heap(v.begin(), v.end()); //puts 99 in its correct position in max heap

    pop_heap(v.begin(), v.end()); //max element goes to the end of the vector
    v.pop_back(); //pops max element 

    sort_heap(v.begin(), v.end()); //sorts array in ascending


    return 0;
}