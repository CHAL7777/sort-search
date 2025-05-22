#include<iostream>
using namespace std;
int binary(int arr[],int size,int target){
	int left=0;
	int right=size;
	while(left<=right){
		int mid=left+(right-left)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid<target]){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	return -1;
}
int main(){
int arr[]={2,5,8,12,16,23,38,56};
int size=sizeof(arr)/sizeof(arr[0]);
int target=16;
int result=binary(arr,size,target);
if(result!=-1){
	cout<<"element found at index "<<result<<endl;
}
else{
	cout<<"the element not found";
}
	return 0;
}