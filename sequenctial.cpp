#include <iostream>
using namespace std;
int sequentialSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key=30;
    int result = sequentialSearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
// int linearsearch(int list[],int key);
// int main(){
//     int list[]={4,5,7,8,9};
//     int n=8;
//     int i=linearsearch(list,n);
//     if(i==-1)
//     cout<<"the item is not found";
//     else 
//     cout<<"the value is found at index: "<<i;
//    return 0;
// }
// int linearsearch(int list[],int key){
//     int index=-1;
//     for(int i=0; i<5; i++){
//         if(list[i]==key){
//             index=i;
//         }
//     }
//     return index;
// }

