#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
int main(){
int arr[]={64,25,12,22,11};
int size=sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, size);
printArray(arr,size);
	return 0;
}