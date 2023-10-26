#include <iostream>
using namespace std;
// sorting elements//
int sortingarray(int arr[], int x, int key){
	// for checking first element to last in array//
	for (int i=0;i<x-1;i++){
		// starting point confirm and now check to arrange elements//
		for (int j=i+1;j<x;j++){
			if (arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			
			}
		}
	}
	cout<<"Sorted Array elements are following:"<<endl;
	for (int i=0;i<x;i++){
		cout<<arr[i]<<endl;
	}
}
int linearsearch(int arr[], int x, int key){
	for (int i=0;i<x;i++){
		if (arr[i]==key){
			cout<<"The position of element is "<<i<<endl;
			cout<<endl;
			return 0;

		}
	}
	return -1;
}
// main function //
int main (){
	// how many array elements //
	int x;
	cout<<"How many array elements expected: "<<endl;
	cin>>x;
	int arr[x];
	// for loop for inputs//
	for (int i=0;i<x;i++){
		cin>>arr[i];
	}
	// which element //
	int key;
	cout<<"Element to find: "<<endl;
	cin>>key;
	// calling  the function//
	cout<<sortingarray(arr,x,key)<<endl;
	cout<<linearsearch(arr,x,key)<<endl;
	
	return 0;
}
