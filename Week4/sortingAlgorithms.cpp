#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();

    for(int i=0; i< n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i -1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
}

int main() {
    vector<int> arr = { 2 ,3, 7, 1, 9, 0};
    // bubbleSort(arr);
    // selectionSort(arr);
    insertionSort(arr);
    for(int i=0; i< arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}