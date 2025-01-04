#include <iostream>
using namespace std;

int main()
{
    // string str;
    // cin >> str;
    // cout << str << endl;
    // // also you can str.push_back and str.pop_back
    // string sentence;
    // getline(cin, sentence, '\t'); // take input sentences
    // cout << sentence;

    // STRING STL
    string str = "Garv Thanvi";
    cout << str[0] << endl;
    cout << str.at(0) << endl;
    // str.front(), .back(), .length()
    auto it = str.begin();
    while (it != str.end())
    {
        cout << *it;
        it++;
    }
    // string = str1 + str2 //concatenation
    // str.empty()
    string sentence = "Hello, How are you?";
    string word = "your";
    cout << endl << sentence.substr(0, 5);
    cout << endl << sentence.substr(5);
    int ans = sentence.find(word); // return index or -1
    cout << ans << endl;

    if (sentence.find(word) != string::npos)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    // str.compare(str1) //boolean value
    return 0;
}