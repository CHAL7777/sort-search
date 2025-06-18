#include<iostream>
using namespace std;
void bubble(int arr[],int size){
   for(int i=1;i<size;i++){
				for(int j=0;j<size-1;j++){
					if(arr[j]>arr[j+1]){
						int temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
}
void printInfo(int arr[],int num){
	for(int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={32,2,5,6,3,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"this is original array"<<endl;
	printInfo(arr,n);
	cout<<"welcome to bubbling"<<endl;
	bubble(arr,n);
	printInfo(arr,n);
	return 0;
}