#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int mystoi(string s)
{
    int len = s.length();
    double num = 0;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    bool negative = s[i] == '-';
    negative == true ? i++ : i;
    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - 48);
        cout << num << endl;
        i++;
    }
    num = negative ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    return num;
}

string ToRoman(int num)
{
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hrns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string ths[] = {"", "M", "MM", "MMM"};

    return ths[num / 1000] + hrns[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[(num % 10)];
}

string addBinary(string a, string b)
{
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            carry += (a[i--] - '0');
        if (j >= 0)
            carry += (b[j--] - '0');
        cout << carry << endl;
        ans.push_back((carry % 2) + '0');
        cout << ans << endl;
        carry /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

void reverseString(char input[], int n, int start)
{
    for (int i = start, j = n - 1 + start; i < j; i++, j--)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[])
{
    int start = 0, count = 1, i = 0;
    while (input[i] != 0)
    {
        i++;
        count++;
        if ((input[i] == ' ' || input[i] == '\0'))
        {
            reverseString(input, count - 1, start);
            start = i + 1;
            count = 0;
        }
    }
}

bool isVowel(char ch)
{
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string sortVowels(string s)
{
    string t = s;
    vector<char> vowel;

    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
            vowel.push_back(s[i]);
    }

    if (vowel.size() == 0)
        return s;

    sort(vowel.begin(), vowel.end());

    int j = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (isVowel(t[i]))
        {
            t[i] = vowel[j++];
        }
    }

    return t;
}

int main()
{
    // string s = "  -324";
    // int integer = mystoi(s);
    // cout << integer;

    // int num = 2230;
    // string roman = ToRoman(num);
    // cout<<roman;
    // string ans = addBinary("1010", "110");
    // cout << ans;

    // char input[100];
    // cin.getline(input, 100);
    // reverseEachWord(input);
    // int i = 0;
    // while(input[i] != '\0'){
    //     cout<<input[i]<<endl;
    //     i++;
    // }

    string s = "OABCDEAJFHGUE";
    string ans = sortVowels(s);
    cout << ans;

    return 0;
}