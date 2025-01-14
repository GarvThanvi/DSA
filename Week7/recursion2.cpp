#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

void printArray(int arr[], int size, int index){
    if(index == size){
        return;
    }

    cout << arr[index] << " ";
    printArray(arr, size, index+1);

}

void findInArray(int arr[], int size, int index, int key){
    if(index == size){
        cout << "Not Found";
        return;
    }

    if(arr[index] == key){
        cout << "Found at " << index << endl;
        return;
    }
    findInArray(arr, size, index+1, key);
}

void maxInArray(int arr[], int size, int index, int ans){
    if(index == size){
        cout << ans << endl;
        return;
    } 

    ans = max(ans, arr[index]);
   maxInArray(arr, size, index+1, ans);
}

void minInArray(int arr[], int size, int index, int ans){
    if(index == size){
        cout << ans << endl;
        return;
    } 

    ans = min(ans, arr[index]);
   minInArray(arr, size, index+1, ans);
}

int main() {
    int arr[] = {10,3,135,40,100,60};
    int size = 6;

    int index = 0;
    // printArray(arr, size, index);
    // index = 0;
    // findInArray(arr, size, index, 60);
    int ans = INT_MIN;
    maxInArray(arr, size, index, ans);
    ans = INT_MAX;
    minInArray(arr, size, index, ans);

    return 0;
}