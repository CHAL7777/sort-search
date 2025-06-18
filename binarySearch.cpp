#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
int left=0;
int right=size;
while(left<=right){
	int mid=left+(right-left)/2;
	for(int i=0;i<size;i++){
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
}
return -1;
}
int main(){
	int arr[]={12,14,16,23,32,45,78};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key=45;
	int result=binarySearch( arr, size,key );
	if(result!=-1){
		cout<<"the element found at index :"<<result;
	}
	else{
		cout<<"the sorry element not founded";
	}
	return 0;
}
