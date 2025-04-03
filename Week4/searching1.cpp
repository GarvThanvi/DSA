#include<iostream>
using namespace std;

void findFirstOccurence(int arr[], int n ,  int target, int &ansIndex){
    int s = 0;
    int e = n -  1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(arr[mid] == target){
            ansIndex = mid;
            e = mid - 1;
        }else if(target > arr[mid]){
            s = mid + 1;
        }else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
}

void findLastOccurence(int arr[],int n, int target, int &ansIndex){
    int s = 0, e = n - 1;
    while(s <= e){
        int mid = s + (e-s)/2;
        
        if(arr[mid] == target){
            ansIndex = mid;
            s = mid + 1;
        }else if(arr[mid] < target){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }

}

int main() {
    int arr[] = {10,20,20,20,20,20,20,30,30,40,40};
    int ansIndex = -1;
    int target = 20;
    int n = 11;

    findFirstOccurence(arr, n ,  target, ansIndex);
    cout << ansIndex << " ";

    findLastOccurence(arr, n, target, ansIndex);
    cout << ansIndex << " ";

    
    

    return 0;
}