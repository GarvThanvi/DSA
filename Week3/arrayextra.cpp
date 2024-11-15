#include<iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int n){
    int j = 0;
    for(int index = 0; index<n; index++){
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        }   
    }
}

int main() {
    int arr[] = {-23, -7, 12, -10, 11, 40, 60};
    int n = 7;
   //Question 1
    shiftNegativeOneSide(arr, n);

    //printing array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    //All other questions done on Leetcode

    //Leetcode question Numbers are , 75, 189, 268, 2149, 2643, 48
    
    return 0;
}