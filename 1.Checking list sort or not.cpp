// checking list is sorted or not //
#include <iostream>
using namespace std;
// bool function to check list //
bool sorted(int arr[], int n){
	// 2. base case //
	if(n==1){
		return true;// if only one element in array then //
	}
	//1. condition satisfaction //
	bool restarr=sorted(arr+1, n-1);
	return(arr[0]<arr[1] && restarr);
}
// 3. main funtion //
int main (){
	int arr[]={1,2,3,4,5,6};
	cout<<sorted(arr,6)<<endl;
	return 0;
} 
