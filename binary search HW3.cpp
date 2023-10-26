#include <iostream>
using namespace std;

int sortingarray(int arr[], int n, int key){
	for(int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"Sorted array elements"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int binarySearch(int arr[], int n, int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}	
	}
	return -1;
	
}
int main (){
	int n;
	cout<<"Enter number: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter number to find in list: "<<endl;
	int key;
	cin>>key;
	cout<<sortingarray(arr, n, key)<<endl;
	cout<<"Output is at position:"<<endl;
	cout<<binarySearch(arr, n, key)<<endl;
	
	return 0;
}
