#include<iostream>
using namespace std;

int getUnique(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

void allPairs(int arr[], int size){
    for(int i=0; i<size;i++){
        for(int j=i; j<size; j++){
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}

void sortZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }

    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }
    while(oneCount--){
        arr[index] = 1;
        index++;
    }
}

void shiftRightBy1(int arr[], int size){
    int temp = arr[size-1];
    for(int i=size-1; i>0; i--){
         arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main(){

    // //FIND UNIQUE IN ARRAY
    // int arr[] = {2,10,11,10,2,13,15,13,15};
    // int size = 9;
    // int finalAns = getUnique(arr,size);
    // cout<<finalAns<<endl;

    // //ALL PAIRS OF AN ARRAY
    // int arr[] = {10,20,30};
    // int size = 3;

    // allPairs(arr,size);

    // //SORT ARRAY OF 0S AND 1S BY COUNTING METHOD

    // int arr[] = {0,1,1,0,1,0,0,0,1,1,0,0};
    // int size = 12;

    // sortZeroOne(arr,size);
    
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    //SHIFT ARRAYS TO RIGHT BY 1

    int arr[] = {10,20,30,40,50,60};
    int size = 6;

    shiftRightBy1(arr,size);

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}