#include<iostream>
#include<limits>
using namespace std;

bool linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

void reverseArray(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        swap(arr[left], arr[right]);
        left++, right--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}

void extremePrint(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        if(left == right){
            cout<<arr[left];
        }else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
        
        left++, right--;
    }
}

int main() {
    // //Address
    // int a = 10;
    // cout<<&a<<endl;

    // int arr[10];
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<sizeof(a)<<endl;

    //----------------------------------------------------------------//

    // //ARRAY INITIALISATION
    // int arr[] = {1,2,3,4,5};
    // int arr[5] = {2,3,4,5,1};
    // int arr[5] = {2,3} //Rest space gets filled with 0
    // int arr[2] = {1,2,3,4,5}; //error

    //----------------------------------------------------------------//

    // //ARRAY I/O AND O/P

    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }

    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    //----------------------------------------------------------------//

    //Value at arr[i] is baseadress + (datatype size * index)
    
    //----------------------------------------------------------------//

    // //DOUBLE EACH ELEMENT OF ARRAY

    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     arr[i] = 2* arr[i];
    //     cout<<arr[i]<<" ";
    // }

    //----------------------------------------------------------------//

    // //LINEAR SEARCH
    // int arr[5] = {10,20,30,40,50};
    // int target = 60;
    // bool flag = 0;

    // for(int i=0; i<5; i++){
    //     if(arr[i] == target){
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag == 0){
    //     cout<<"Target not found";
    // }else{
    //     cout<<"Target found";
    // }  

    //----------------------------------------------------------------//
    
    // //LINEAR SEARCH FUNCTION
    // int arr[5] = {1,2,3,4,5};
    // int target = 8;
    // bool ans = linearSearch(arr, 5, target);

    // if(ans){
    //     cout<<"Target found";
    // }else{
    //     cout<<"Not found";
    // }

    //----------------------------------------------------------------//
    
    //FIND MIN IN ARRAY USING INT_MIN/MAX

    //----------------------------------------------------------------//
    
    // //REVERSE ARRAY

    // int arr[] = {1,2,3,4,5,6};
    // reverseArray(arr, 6);

    //----------------------------------------------------------------//

    //EXTREME PRINT IN AN ARRAY

   int arr[] = {1,2,3,4,5};
   extremePrint(arr, 5);





        
    
    return 0;
}