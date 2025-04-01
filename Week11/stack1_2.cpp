#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    string name = "headdownandcode";
    for (int i = 0; i < name.size(); i++)
    {
        char ch = name[i];
        s.push(ch);
    }

    while (!s.empty())
    {
        cout << (char)s.top() << endl;
        s.pop();
    }
    return 0;
}