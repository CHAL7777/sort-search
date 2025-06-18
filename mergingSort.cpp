#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
	int i=left;
	int j=mid+1;
	int k=left;
	int temp[11];
	while(i<=mid&&j<=right){
		if(arr[i]<=arr[j]){
     temp[k]=arr[i];
					i++;
		}
		else{
			temp[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=right){
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(int s=left;s<=right;s++){
		arr[s]=temp[s];
	}
}
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main(){
	int myarr[]={13,1,43,2,5,2,6,22,43,222,23};
	int size=sizeof(myarr)/sizeof(myarr[0]);
	int left=0;
	int right=size-1;
	for(int i=0;i<size;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	mergeSort(myarr,left,right);
	cout << "Merged: ";
for(int i=0;i<size;i++){
	cout<<myarr[i]<<" ";
}
cout<<endl;
	return 0;
}