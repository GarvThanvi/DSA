#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArrays(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int> &ans)
{
    int i = 0, j = 0;

    while (i < sizeArr && j < sizeBrr)
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }

    while (i < sizeArr)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j < sizeBrr)
    {
        ans.push_back(brr[j]);
        j++;
    }
}

void merge(int arr[], int s, int e, int mid)
{
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    int index = s;
    for(int i=0; i<leftLength; i++) leftArr[i] = arr[index++];
    
    index = mid + 1; //No real need to write this
    for(int i=0; i<rightLength; i++) rightArr[i] = arr[index++];
    
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < leftLength && rightIndex < rightLength){
        if(leftArr[leftIndex] < rightArr[rightIndex]){
            arr[mainArrayIndex++] = leftArr[leftIndex++];
        }else{
            arr[mainArrayIndex++] = rightArr[rightIndex++];
        }
    }
    //REMAINING ELEMENTS
    while(leftIndex < leftLength) arr[mainArrayIndex++] = leftArr[leftIndex++];
    while(rightIndex < rightLength) arr[mainArrayIndex++] = rightArr[rightIndex++];

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    //Count number of elements smaller than pivot
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot) count++;
    }

    //place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //left to pivot should be less than it and right to pivot elements are greater than it
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e) return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p);
    quickSort(arr, p+1, e);
}

int main()
{
    // int arr[] = {10, 30, 50, 70};
    // int sizeArr = 4;

    // int brr[] = {20, 40, 60, 80, 90, 100};
    // int sizeBrr = 6;

    // vector<int> ans;
    // mergeSortedArrays(arr, sizeArr, brr, sizeBrr, ans);
    // for (int num : ans)
    // {
    //     cout << num << " ";
    // }
    int arr[] = {90, 89, 88, 87, 86, 85, 84};
    quickSort(arr, 0 ,6);
    // mergeSort(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }

    
    return 0;


}