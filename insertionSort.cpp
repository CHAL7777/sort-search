#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
	for(int i=0;i<n;i++){
	   int j=i;
				while(j>0&&arr[j]<arr[j-1]){
					int temp=arr[j];
					arr[j]=arr[j-1];
					arr[j-1]=temp;
					// swap(arr[j],arr[j-1]);
					j--;
				}
	}
}
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
int main(){
	int arr[]={12,11,13,5,6,43,55,2,6,2,7,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"original array"<<endl;
	printArray(arr,n);
	cout<<"sorted array"<<endl;
	insertionSort(arr, n);
	printArray(arr,n);
	return 0;
}