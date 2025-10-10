#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    // Pattern1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    // Pattern1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    // Pattern1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    // Pattern1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    // Pattern1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    // Pattern1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < n - i - 1; k++)
            cout << " ";
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < n - i - 1; k++)
            cout << " ";
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < i; k++)
            cout << " ";
        for (int k = 0; k < (2 * n - 2 * i - 1); k++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < i; k++)
            cout << " ";
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < n - i - 1; k++)
            cout << " ";
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < n - i - 1; k++)
            cout << " ";
        cout << endl;
    }
    // symmetrical
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < i; k++)
            cout << " ";
        for (int k = 0; k < (2 * n - 2 * i - 1); k++)
        {
            cout << "*";
        }
        // space
        for (int k = 0; k < i; k++)
            cout << " ";
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 0; i < (2 * n - 1); i++)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < (2 * n - i - 1); j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for(int i=0; i<n; i++){
        int count = i & 1 ? 0 : 1;
        for(int j=0; j<i+1; j++){
            cout << count << " ";
            count = count == 1 ? 0 : 1;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for(int i=0; i<n; i++){
        //numbers
        for(int j=0; j<i+1; j++){
            cout << j+1;
        }
        //spaces
        for(int j=0; j<(2 * n - 2 * i - 2); j++){
            cout << " ";
        }
        //numbers
        for(int j=i; j>=0; j--){
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << count++ << " ";
        }cout << endl;
    }
}

void pattern14(int n)
{
    
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<i+1; j++){
            cout << ch++ << " ";
        }cout << endl;
    }
}

void pattern15(int n)
{
    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<n-i; j++){
            cout << ch++ << " ";
        }cout << endl;
    }
}

void pattern16(int n)
{
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void pattern17(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
        //alphabets
        char ch = 'A';
        for(int j=0; j<(2*i + 1); j++){
            if(j < ((2*i + 1) / 2)){
                cout << ch++;
            }else{
                cout << ch--;
            }
        }
        //spaces
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }cout << endl;
    }
}

void pattern18(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + n - i - 1;
        for(int j=0; j<i+1; j++){
            cout << ch++ << " ";
        }cout << endl;
    }
}

void pattern19(int n){
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<(n-i); j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<(2*i); j++){
            cout << " ";
        }
        //stars
        for(int j=0; j<(n-i); j++){
            cout << "*";
        }
        cout << endl;
    }

    //line of symmetry

    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<(2*n - 2*i - 2); j++){
            cout << " ";
        }
        //stars
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    // pattern1(4);
    // pattern2(4);
    // pattern3(4);
    // pattern4(5);
    // pattern5(5);
    // pattern6(5);
    // pattern7(5);
    // pattern8(5);
    // pattern9(5);
    // pattern10(5);
    // pattern11(5);
    // pattern12(5);
    // pattern13(5);
    // pattern14(5);
    // pattern15(5);
    // pattern16(5);
    // pattern17(5);
    // pattern18(5);
    pattern19(5);
    return 0;
}
