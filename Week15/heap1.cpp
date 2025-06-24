#include <iostream>
using namespace std;

class Heap
{
public:
    int *arr;
    int capacity;
    int index;

    Heap(int n)
    {
        this->capacity = n;
        arr = new int[n];
        index = 0;
    }

    void printHeap()
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void insert(int val)
    {
        if (index == capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }

        index++;
        arr[index] = val;
        int currentIndex = index;
        while (index > 1)
        {
            int parentIndex = currentIndex / 2;

            if (arr[parentIndex] < arr[currentIndex])
            {
                swap(arr[parentIndex], arr[currentIndex]);
                currentIndex = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    void deleteFromHeap()
    {
        swap(arr[1], arr[index]);
        index--;
        heapify(arr, index, 1);
    }

    void heapify(int *arr, int n, int currIndex){
        int i = currIndex;
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;

        int largestKaIndex = i;

        if(leftIndex < n && arr[leftIndex] > arr[largestKaIndex]){
            largestKaIndex = leftIndex;
        }
        if(rightIndex < n && arr[rightIndex] > arr[largestKaIndex]){
            largestKaIndex = rightIndex;
        }

        if(largestKaIndex != i){
            swap(arr[i], arr[largestKaIndex]);
            i = largestKaIndex;
            heapify(arr, n ,i);
        }
    }
};

void Heapify(int *arr, int n, int currIndex)
{
    int i = currIndex;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;

    int largestKaIndex = i;

    if (leftIndex < n && arr[leftIndex] > arr[largestKaIndex])
    {
        largestKaIndex = leftIndex;
    }
    if (rightIndex < n && arr[rightIndex] > arr[largestKaIndex])
    {
        largestKaIndex = rightIndex;
    }

    if (largestKaIndex != i)
    {
        swap(arr[i], arr[largestKaIndex]);
        i = largestKaIndex;
        Heapify(arr, n, i);
    }
}

void buildHeapFromArray(int *arr, int n){
    for(int i=n/2; i>0; i--){
        Heapify(arr, n, i);
    }
}

void heapSort(int *arr, int n){
    int e = n - 1;
    while(e > 1){
        swap(arr[1], arr[e]);
        e--;
        Heapify(arr, e+1, 1);
    }
}

int main()
{
    int n = 6;
    int arr[] = {-1, 10, 20, 30, 40 ,50};
    buildHeapFromArray(arr, n);
    for(int i=1; i<n ;i++){
        cout << arr[i] << " ";
    }cout << endl;
    heapSort(arr, n);
    for(int i=1; i<n; i++){
        cout << arr[i] << " ";
    }
    // Heap pq(10);
    // pq.insert(10);
    // pq.printHeap();
    // pq.insert(20);
    // pq.printHeap();
    // pq.insert(30);
    // pq.printHeap();
    // pq.insert(40);
    // pq.printHeap();
    // pq.insert(50);
    // pq.printHeap();
    // pq.deleteFromHeap();
    // pq.printHeap();
    // pq.deleteFromHeap();
    // pq.printHeap();
    return 0;
}