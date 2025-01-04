#include <iostream>
#include <cstring>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    int i =0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

void replaceCharacter(char originalChar, char newChar, char arr[], int size){
    for(int i=0; i<size;i++){
        if(arr[i] == originalChar){
            arr[i] = newChar;
        }
    }
}

void convertToUpperCase(char arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z' ){
            arr[i] = arr[i] - 'a' + 'A'; //-32
        }
    }
}

void convertToLowerCase(char arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a'; //+32
        }
    }
}

void reverseArray(char arr[], int size){
    int i=0, j=size-1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++, j--;
    }
}

bool checkPalindrome(char arr[], int size){
    int i =0, j = size-1;
    while(i <= j){
        if(arr[i] == arr[j]){
            i++,j--;
        }else{
            return false;
        }
    }
    return true;
}

int main() {
    //CHARACTER ARRAYS
    // // char arr[100];
    // // cin.getline(arr, 100, '\t');
    // // cout<<arr;
    
    // char arr[100];
    // cin>>arr;
    // int size = getLength(arr);
    // // replaceCharacter('@', ' ', arr, size);
    // // convertToLowerCase(arr, size);
    // // convertToUpperCase(arr,size);
    // // reverseArray(arr,size);
    // // if(checkPalindrome(arr,size)) cout<<"Yes it is palindrome"<<endl;
    
    // cout << arr;
    //---------------------------------------------------------------------------------------------------------------------------
    //CHAR ARRAYS FUCNTIONS
    char arr1[100];
    char arr2[100];
    cin>>arr1;
    cin>>arr2;

    cout << strcat(arr1, arr2)<<endl;
    cout<<strlen(arr1)<<endl;
    return 0;
}