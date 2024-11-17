#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

void shiftNegativeOneSide(int arr[], int n){
    int l = 0;
    int h = n - 1;

    while(l <= h){
        if(arr[l] < 0){
            l++;
        }else if(arr[h] > 0){
            h--;
        }else{
            swap(arr[l], arr[h]);
        }
    }
}

//Missing elements from an array with duplicates
//Negative Marking method

// void missingElement(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int index = abs(arr[i]);
//         if(arr[index-1] > 0){
//             arr[index-1] *= -1;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i] > 0){
//             cout<<i+1<<" ";
//             cout<<endl;
//         }
//     }
// }
//SORTING + SWAPPING METHOD
void missingElement(int arr[], int n){
    int i = 0;

    while(i < n){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }else{
            i++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    // int n = 10;
    // int arr[n] = {1,-2,3,4,5,6,-7,-8,-9,10};
    // shiftNegativeOneSide(arr, n);
    
    int n = 5;
    int arr[5] = {1,3,3,3,5};

    missingElement(arr, n);

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    return 0;
}