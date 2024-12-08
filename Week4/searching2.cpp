#include <iostream>
#include <vector>

using namespace std;

// Function to perform binary search for peaks
void findPeaks(const vector<int>& arr, int start, int end, vector<int>& peaks) {
    if (start > end) return;

    int mid = (start + end) / 2;

    // Check if mid is a peak
    if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == arr.size() - 1 || arr[mid] >= arr[mid + 1])) {
        peaks.push_back(mid);
    }

    // Recursively search left and right parts
    findPeaks(arr, start, mid - 1, peaks);
    findPeaks(arr, mid + 1, end, peaks);
}

// Wrapper function to find peaks in the array
vector<int> findPeaksInArray(const vector<int>& arr) {
    vector<int> peaks;
    findPeaks(arr, 0, arr.size() - 1, peaks);
    return peaks;
}

void mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;

        while(s<=e){
            long long int mid = s + (e-s)/2;
            if(mid * mid == x){
                ans = mid;
                break;
            }
            if(mid * mid < x){
                ans = mid;
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        double finalAns = double(ans);
        double factor = 1;

        for(int precision = 0; precision < 2; precision++){
            factor = factor/10.0;
            for(int i=0;i<=9;i++){
                double toAdd = i*factor;
                if((finalAns + toAdd)*(finalAns + toAdd) < x){
                    finalAns = finalAns + toAdd;
                    cout<<finalAns<<" ";
                }else{
                    break;
                }
            }
        }
        
    }


int main() {
    // vector<int> array = {1,3,4,1,6,7,8,0};

    // // Get all peak indexes
    // vector<int> peaks = findPeaksInArray(array);

    // // Print the result
    // cout << "Indexes of peaks: ";
    // for (int index : peaks) {
    //     cout << index << " ";
    // }
    // cout << endl;

    mySqrt(90);



    return 0;
}
