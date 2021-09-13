#include <iostream>
#include <vector>
#include <map>

using namespace std;

int part(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // last as pivot

    int pivotIndex = low;

    // divide
    for (int i = low; i < high; i++) {
        if (arr[i] <= pivot) {
            iter_swap(arr.begin() + pivotIndex, arr.begin() + i);
            pivotIndex++;
        }
    }

    // swap element at pivotIndex and pivot
    iter_swap(arr.begin() + pivotIndex, arr.begin() + high);
    return pivotIndex;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {

        // sorting and divide sides
        int partIndex = part(arr, low, high);
           
        // recursive sort
        quickSort(arr, low, partIndex - 1); // left
        quickSort(arr, partIndex + 1, high); // right
   }
}

int main()
{   
    vector<int> arr{ 6,34,6,2,7, 1,2 };

    quickSort(arr, 0, arr.size() - 1);
}