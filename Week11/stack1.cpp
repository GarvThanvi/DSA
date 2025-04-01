#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            arr[top] = -1;
            top--;
        }
    }

    int getSize()
    {
        return top+1;
    }

    bool isEmpty()
    {
        if(top == -1) return true;
        return false;
    }

    int getTop()
    {
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void print(){
        cout << "Printing stack ";
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.print();
    int top = s.getTop();
    cout << top << endl;
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    s.push(60);
    cout << s.getSize() << endl;
    cout << s.isEmpty();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}