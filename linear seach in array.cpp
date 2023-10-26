#include <iostream>
using namespace std;
// function for linear searching elements in array//
int linearsearch(int arr[], int x, int key){
	// i want to start loop from 0 to last element to check number if it is present in array//
	for (int i=0;i<x;i++){
		if (arr[i]==key){
			return i;
			// if it is available then it return i to user consule//
		}
	}
	return -1;
}
//main function//
int main () {
	// input number of array elements//
	int x;
	cout<<" Enter Number of array Elements: "<<endl;
	cin>>x;
	// declaring array//
	int arr[x];
	// for loop for number of x elements of array//
	for (int i=0;i<x;i++){
		cin>>arr[i];
	}
	// input number which is find in array//
	int key;
	cout<<"Enter the number to find in array: "<<endl;
	cin>>key;
	
	// call the linear search function in main function//
	cout<<linearsearch(arr,x,key)<<endl;
	return 0;
	
}
