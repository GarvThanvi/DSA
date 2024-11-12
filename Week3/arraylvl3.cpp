//2D Array is stored in 1d array form in memory.
//no of columns * i + j to access element

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void printArray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printArrayColwise(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
} 

bool findTarget(int arr[][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
             if(arr[i][j] == target){
                return true;
             }
        }
    }
    return false; //Means didnt find anything so return false
}

int findMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

void rowSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void colSum(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void transpose(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

}

int main(){
    // //INITIALIZING 2D
    // int arr[3][4] = {
    //     {1,2,3,4},{5,6,7,8},{9,0,12,13}
    // };
    // //ATLEAST GIVE COLUMN TO CODE
    // int brr[][2] = {
    //     {1,2},{2,4}
    // };

    // printArray(arr, 3, 4);
    // printArrayColwise(arr, 3 ,4);

    //for input of 2d array do cin in 2 loops

    // int max = findMax(arr, 3, 4);
    // cout<<max;

    // //row wise sum
    // rowSum(arr, 3, 4);

    // //col wise sum
    // colSum(arr, 3, 4);

    //for diagonal sum in a metric u only need 1 loop

    // //Transpose of a matrix
    // transpose(arr, 3, 4);
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //2D VECTOR
    vector<vector<int>> arr(5, vector<int>(10,0));
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

//WE CAN ALSO HAVE DIFFERENT NUMBER OF COLUMNS FOR A 2D VECTOR




    

    return 0;
}