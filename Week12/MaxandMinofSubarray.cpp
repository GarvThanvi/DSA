#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int maxMinSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq, dq2;
    int ans = 0;

    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        while (!dq2.empty() && nums[dq2.back()] >= nums[i])
        {
            dq2.pop_back();
        }
        dq2.push_back(i);
    }

    ans = nums[dq.front()] + nums[dq2.front()];

    for (int i = k; i < nums.size(); i++)
    {
        if (!dq.empty() && dq.front() < i - k + 1)
        {
            dq.pop_front();
        }

        if (!dq2.empty() && dq2.front() < i - k + 1)
        {
            dq2.pop_front();
        }

        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        while (!dq2.empty() && nums[dq2.back()] >= nums[i])
        {
            dq2.pop_back();
        }
        dq2.push_back(i);

        ans += nums[dq.front()] + nums[dq2.front()];
    }
    return ans;
}




int main()
{
    vector<int> v{2,5,-1,7,-3,-1,-2};
    int k = 4;
    int sum = maxMinSlidingWindow(v, k);
    cout << sum << endl;
    return 0;
}