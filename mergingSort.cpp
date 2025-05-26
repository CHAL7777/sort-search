#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i = l;
    int j = m + 1;
    int k = l;
    int temp[5]; // fixed size since array size is 5

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= m) {
        temp[k++] = arr[i++];
    }

    while (j <= r) {
        temp[k++] = arr[j++];
    }

    for (int s = l; s <= r; s++) {
        arr[s] = temp[s];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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

    mergeSort(myarr, 0, 4);

    cout << "After sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << myarr[i] << " ";
    }
    cout << endl;

    return 0;
}
