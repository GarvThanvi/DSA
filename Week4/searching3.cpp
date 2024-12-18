#include<iostream>
using namespace std;

//Dividing without using /
int getQuotient(int dividend, int divisor){
    int s = 0;
    int e = dividend;
    int ans = -1;
    while(s <= e){
        int mid = s + (e-s)>>1;

        if((divisor * mid) == dividend){
            return mid;
        }
        if((divisor * mid) < dividend){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return ans;

} 

int binarySearchInNearlySorted(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = s + (e-s)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid+1] == target){
            return mid + 1;
        }
        if(arr[mid-1] == target){
            return mid-1;
        }
        if(arr[mid] < target){
            s = mid + 2;
        }else{
            e = mid - 2;
        }
        
    }
    return -1;
}

int oddOccuringElement(int arr[], int size){
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = s + (e-s)/2;
        if(s==e) return s;
        
        if(mid-1>=0 && arr[mid] != arr[mid-1] && mid+1<size && arr[mid] != arr[mid+1]){
            return mid;
        }
        //edge cases
        if(mid-1 < 0 && arr[mid] != arr[mid+1]){
            return mid;
        }
        if(mid+1 >= size && arr[mid] != arr[mid-1]){
            return mid;
        }
        //-----------------------

        if(mid-1>=0 && arr[mid] == arr[mid-1]){
            int startingPairIndex = mid - 1;
            if(startingPairIndex & 1){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }

        if(mid+1<size && arr[mid] == arr[mid+1]){
            int startingPairIndex = mid;
            if(startingPairIndex & 1){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }

    }
    return -1;
}

int main(){
    // int dividend = -10;
    // int divisoappr = -2;

    // int ans = getQuotient(abs(dividend), abs(divisor));

    // if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
    //     cout << -ans;
    // }else{
    //     cout << ans;
    // }

    // int arr[] = {10,3,40,20,50,80,70};
    // int size = 7;
    // int target = 70;
    // int ans = binarySearchInNearlySorted(arr, size, target);
    // cout<<"Found at Index "<<ans;

    int arr[] = {2,2,5,5,1};
    int size = 5;
    int ans = oddOccuringElement(arr,size );
    cout << ans;


    return 0;
}