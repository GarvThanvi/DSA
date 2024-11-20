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

void wavePrint(int row, int col, int arr[][10]){
    // for(int i=0; i<col; i++){
    //     for(int j=0; j<row; j++ ){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     i++;
    //     for(int j=row-1;j>=0; j--){
    //         cout<<arr[j][i]<<" ";
    //     }
    // }

    for(int i=0; i<col; i++){
        if((i & 1) == 0){
            for(int j=0; j<row; j++){
                cout<<arr[j][i]<<" ";
            }}
            else{
                for(int j=row-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            } 
            }
        
    }
}



int main(){
    int row = 3;
    int col = 4;
    int arr[10][10] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    wavePrint(row, col, arr);


    return 0;
}
//Rest questions done on leetcode or gfg