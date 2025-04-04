#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &cooksRanks, int nP, int mid){
    int currP = 0;
    for(int i=0; i<cooksRanks.size(); i++){
        int R = cooksRanks[i], j =1;
        int timeTaken = 0;

        while(true){
            if(timeTaken + j * R <= mid){
                ++currP;
                timeTaken += j*R;
                ++j;
            }else{
                break;
            }
        }
        
    }
        return currP >= nP;
}

int minTimeToCompleteOrder(vector<int> &cooksRanks, int nP){
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * ( nP * (nP + 1)/2 );
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(cooksRanks, nP, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; ++i) {
        int nP, nC;
        cin >> nP >> nC;

        vector<int> cooksRanks;
        while(nC--){
            int rank;
            cin >> rank;
            cooksRanks.push_back(rank);
        }

        cout << minTimeToCompleteOrder(cooksRanks, nP) << endl;
        

    }

    return 0;
}