#include <iostream>
#include <string>
#include <vector>
using namespace std;

void lastOccurence(string &s, int i, char x)
{
    if (i < 0)
    {
        cout << "Not found";
        return;
    }
    if (s[i] == x)
    {
        cout << "Found at Index " << i << endl;
        return;
    }
    lastOccurence(s, i - 1, x);
}

void reverseString(string &s, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    swap(s[l], s[r]);
    reverseString(s, l + 1, r - 1);
}

bool palindromeCheck(string &s, int l, int r)
{
    if (l > r)
        return true;
    if (s[l] != s[r])
        return false;
    palindromeCheck(s, l + 1, r - 1);
}

void printAllSubarrays_util(vector<int> &arr, int start, int end)
{

    if (end == arr.size())
    {
        return;
    }

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    printAllSubarrays_util(arr, start, end + 1);
}

void printAllSubarrays(vector<int> &arr)
{

    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        printAllSubarrays_util(arr, start, end);
    }
}

int main()
{
    //    string s = "abcdefbcdeffgff";
    //    char x = 'a';
    //    int i = s.size() - 1;
    //    lastOccurence(s, i, x);

    // string s = "abcdefz";
    // int left = 0;
    // int right = s.size() - 1;
    // reverseString(s, left, right);
    // cout << s;

    // string s = "racecar";
    // int left = 0;
    // int right = s.size() - 1;
    // if(palindromeCheck(s, left, right)) cout << "Yes";
    // else cout << "No";

    vector<int> arr = {1, 2, 3, 4, 5};
    printAllSubarrays(arr);

    return 0;
}