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

void printAllOdds(int arr[], int size, int index){
    if(index == size) return;
    if(arr[index] & 1) cout << arr[index] << " ";
    printAllOdds(arr, size, index + 1);
}

int binarySearch(int arr[],int size, int s, int e, int target){
    if(s > e) return -1;
    int mid = (s + e)/2;
    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] > target) binarySearch(arr, size, s , mid - 1, target);
    if(arr[mid] < target) binarySearch(arr,size, mid + 1, e, target);
}

void printDigits(int num){
    if(num == 0) return;
    printDigits(num / 10);
    cout << num % 10 << " ";
}

bool isArraySorted(int arr[], int size, int index){
    if(index == size-1) return true;
    if(arr[index] < arr[index + 1]) isArraySorted(arr, size, index + 1);
    else return false;
}

int main() {
    int arr[] = {20,30,40,50,60,70};
    int size = 6;

    int index = 0;
    int s = 0, e = size - 1;
    // printArray(arr, size, index);
    // index = 0;
    // findInArray(arr, size, index, 60);
    // int ans = INT_MIN;
    // maxInArray(arr, size, index, ans);
    // ans = INT_MAX;
    // minInArray(arr, size, index, ans);

    // printAllOdds(arr, size, index);
    // int binaryS = binarySearch(arr, size, s, e, 120);
    // cout << binaryS << endl;

    // printDigits(389);
    // index = 0;
    bool ans = isArraySorted(arr, size, index);
    cout << ans << " ";
    return 0;
}