#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value)
    {
        if(top2 == top1+1){
            cout << "Stack 1 overflow" << endl;
        }else{
            top1++;
            arr[top1] = value;
        }
    }

    void push2(int value)
    {
        if(top2 == top1+1){
            cout << "Stack 2 overflow" << endl;
        }else{
            top2--;
            arr[top2] = value;
        }
    }

    void pop1()
    {
        if(top1 == -1){
            cout << "Stack 1 undeflow" << endl;
        }else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2()
    {
        if(top2 == size){
            cout << "Stack 2 undeflow" << endl;
        }else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.push1(10);
    s.push1(30);
    s.push2(20);
    s.push2(40);
    s.push1(50);
    s.push2(60);
    s.print();
    s.pop2();
    s.pop1();
    s.print();
    return 0;
}