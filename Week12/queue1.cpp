#include<iostream>
#include<queue>
using namespace std;

class Queue{
    private:
    int *arr;
    int n;
    int front, rear;

    public:
    Queue(int size){
        arr = new int[size];
        n = size;
        front = -1, rear = -1;
    }

    void push(int val){
        if(rear == n - 1){
            cout << "Overflow" << endl;
        }else if(rear == -1 && front == -1){
            front = rear = 0;
            arr[rear] = val;
        }else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout << "Underflow" << endl;
        }else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }else{
            arr[front] = -1;
            front++;
        }
    }

    int getFront(){
        if(front == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else return arr[front];
    }

    int getRear(){
        if(rear == -1){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else return arr[rear];
    }



    int getSize(){
        if(front == -1 && rear == -1) return 0;
        return rear-front+1;
    }

    bool isEmpty(){
        if(front == -1 && rear == -1) return true;
        else return false;
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(30);
    q.push(40);
    cout << q.getSize() << endl;
    q.push(50);
    q.push(50);
    q.push(60); //Overflow
    q.pop();
    q.pop();
    cout << q.getSize() << endl;
    cout << q.getFront() << endl;
    cout << q.getRear() << endl;
    return 0;
}