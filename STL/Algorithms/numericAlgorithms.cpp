#include<iostream>
#include<vector>
#include<numeric>
using namespace std;


int main(){

    //inner product is like dot product
    //inner_product(first.begin(), first.end(), second.begin(), second.end(), 0);
    
    // vector<int> v(5);
    // v[0] = 10;
    // v[1] = 20;
    // v[2] = 30;
    // v[3] = 40;
    // v[4] = 50;

    // int totalSum = accumulate(v.begin(), v.end(), 0);
    // cout << totalSum << endl;

    // vector<int> first;
    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);
    // vector<int> second;
    // second.push_back(40);
    // second.push_back(50);
    // second.push_back(60);
    // vector<int> result(first.size());
    // partial_sum(first.begin(), first.end(), result.begin());
    // for(auto a:result){
    //     cout << a << endl;
    // }

   vector<int> arr(5);
   iota(arr.begin(), arr.end(), 100); //adds values incrementally to array from 100
   for(int a : arr){
    cout << a << " ";
   }


    return 0;
}