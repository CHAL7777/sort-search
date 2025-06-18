#include <iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
         swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
int main() {
    int myarr[5];
    cout << "Enter five elements to be sorted: ";
    for (int i = 0; i < 5; i++) {
        cin >> myarr[i];
    }
    cout << "Before sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << myarr[i] << " ";
    }
    cout << endl;
    quickSort(myarr, 0, 4);
    cout << "After sorting (Quick Sort): ";
    for (int i = 0; i < 5; i++) {
        cout << myarr[i] << " ";
    }
    cout << endl;
    return 0;
}
