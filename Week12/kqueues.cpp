#include <iostream>
using namespace std;

class KQueues
{
public:
    int n, k, freeSpot;
    int *arr, *rear, *front, *next;

    KQueues(int _n, int _k) : n(_n), k(_k), freeSpot(0)
    {
        arr = new int[n];
        next = new int[n];
        rear = new int[k];
        front = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }

    bool push(int X, int qi)
    {
        if (freeSpot == -1)
            return false; // Overflow
        int index = freeSpot;
        freeSpot = next[index];
        if (front[qi] == -1)
        {
            front[qi] = index;
        }
        else
        {
            next[rear[qi]] = index;
        }

        next[index] = -1;
        rear[qi] = index;
        arr[index] = X;
        return true;
    }

    int pop(int qi)
    {
        if (front[qi] == -1)
            return -1;
        int index = front[qi];
        front[qi] = next[index];
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }

    void print()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~KQueues()
    {
        delete[] arr;
        delete[] next;
        delete[] front;
        delete[] rear;
    }
};

int main()
{
    KQueues q(8, 3);
    q.push(1, 0);
    q.push(2, 0);
    q.push(3, 1);
    q.print();
    int poppedElement = q.pop(1);
    cout << poppedElement << endl;
    q.print();
    return 0;
}