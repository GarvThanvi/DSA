#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//auto it = min_element(arr.begin(), arr.end()) returns iterator of min elemenet in a range
    //max_element

void printDouble(int a){
    cout<<2*a<<endl;
}

bool checkOdd(int a){
    return a % 2 == 1;
}

int main(){
    
    vector<int> arr(6);
    arr[0] = 11;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 11;
    arr[5] = 100;

    // for_each(arr.begin(), arr.end(), printDouble);

    // int target = 40;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout << *it << endl;

    // auto it = find_if(arr.begin(), arr.end(), checkOdd);
    // cout << *it << endl;

    // int target = 11;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout << ans << endl;

    //count_if

    // sort(arr.begin(), arr.end());
    // for(int a: arr){
    //     cout << a << endl;
    // }

    //reverse

    // rotate(arr.begin(), arr.begin() + 3, arr.end());
    // for(int a:arr){
    //     cout << a << " ";
    // }

    vector<int> brr(5);
    brr[0] = 10;
    brr[1] = 10;
    brr[2] = 11;
    brr[3] = 12;
    brr[4] = 12;

    // //unique: removes duplicates from a sorted range
    // auto it = unique(brr.begin(), brr.end());
    // //before it there are unique elements
    // //after it we have duplicate elements
    // brr.erase(it, brr.end());
    // for(int a:brr){
    //     cout << a << " ";
    // }

    vector<int> crr(5);
    crr[0] = 10;
    crr[1] = 20;
    crr[2] = 33;
    crr[3] = 30;
    crr[4] = 11;

    auto it = partition(crr.begin(), crr.end(), checkOdd);
    //if condition(CheckODD) is true then all odd elements come to left side of iterator(it)
    crr.erase(it, crr.end());

    for(int a : crr){
        cout << a << " ";
    }
    





    








    return 0;
}