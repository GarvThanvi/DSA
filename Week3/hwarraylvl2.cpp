#include<iostream>
using namespace std;

void sumOfPairs(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j = i; j<size; j++){
            cout<<arr[i] + arr[j]<<endl;
        }
    }
}

int sortArray(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                break;
            }
    }
}
}

int leftShiftBy1(int arr[], int size){
    int temp = arr[0];
    for(int i=0; i<size;i++){
        arr[i] = arr[i+1];
    }
    arr[size - 1] = temp;
}

int leftShiftByK(int arr[], int size, int k){
    int temp[k];
    for(int i=0; i<k;i++){
        temp[i] = arr[i];
    }

    for(int i=0; i<(size-k); i++){
        arr[i] = arr[i+k];
    }

    for(int i=0; i<k; i++){
        arr[size-k+i] = temp[i];
    }
}

int rightShiftByK(int arr[], int size, int k){
    int *temp = new int[k];
    for(int i=0; i<k;i++){
        temp[i] = arr[size-k+i];
    }

    for(int i=size-1; i>(k-1); i++){
        arr[i] = arr[i-k];
    }

    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
}



int main() {
    //SUM OF PAIR
    // int arr[] = {1,2,3};
    // int size = 3;
    // sumOfPairs(arr, size);

    // //2 POINT APPROACH FOR SORT OF 0S AND 1S
    // int arr[] = {1,1,1,1,0,0,0,0,0};
    // int size = 9;

    // sortArray(arr, size);

    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
     
    //  //LEFT SHIFT ARRAY BY 1
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // leftShiftBy1(arr, size);
    // for(int i=0; i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    //LEFT/RIGHT SHIFT ARRAY BY K
    int arr[] = {10,20,30,40,50,60};
    int size= 6;

    int k = 3;

    leftShiftByK(arr, size, k);
    // rightShiftByK(arr,size,k);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
         



    return 0;
}