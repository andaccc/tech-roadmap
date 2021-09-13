#include <iostream>
#include <vector>
#include <map>

using namespace std;


void merge(vector<int>& arr, int start, int mid, int end) {
    // merge two subarray

    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    vector<int> leftArr;
    vector<int> rightArr;

    for (int i = 0; i < leftSize; i++) {
        leftArr.push_back(arr[start + i]);
    }
    for (int i = 0; i < rightSize; i++) {
        rightArr.push_back(arr[mid + 1 + i]);
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mergedIndex = start;

    // merge two array
    while (leftIndex < leftSize && rightIndex < rightSize) {
        if (leftArr[leftIndex] <= rightArr[rightIndex]) {
            arr[mergedIndex] = leftArr[leftIndex];
            leftIndex++;
        }
        else {
            arr[mergedIndex] = rightArr[rightIndex];
            rightIndex++;
        }
        mergedIndex++;
    }


    // merge back remaining left arr
    while (leftIndex < leftSize) {
        arr[mergedIndex] = leftArr[leftIndex];
        leftIndex++;
        mergedIndex++;
    }

    // merge back remaining right arr
    while (rightIndex < rightSize) {
        arr[mergedIndex] = rightArr[rightIndex];
        rightIndex++;
        mergedIndex++;
    }
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;

        // keep dividing
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
    
        // recursively merge back
        merge(arr, start, mid, end);
    } 
}

int main()
{   
    vector<int> arr{ 6, 34, 6, 2, 7, 1, 2 };

    mergeSort(arr, 0, arr.size() - 1);

}