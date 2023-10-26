// first occurence  and last element in array //
#include <iostream>
using namespace std;
//1. first //
int firstocc(int arr[], int n, int i, int key){
	//3.base case //
	if(i==n){
		return -1;
	}
	//2. conditional//
	if(arr[i]==key){
		return i;
	}
	return (firstocc(arr,n,i+1,key));
}
//4. last //
int lastocc(int arr[], int n, int i, int key){
	//7. base case //
	if(i=n){
		return -1;
	}
	//5.conditional //
	// reverse looking //
	int restarr=lastocc(arr,n,i+1,key);
	if(restarr!=-1){
		return restarr;
	}
	//6. conditional //
	if(arr[i]==key){
		return i;
	}
}
//8. main//
int main (){
	int arr[]={2,7,2,4,3,8,3};
	cout<<firstocc(arr,7,0,3)<<endl;
	cout<<lastocc(arr,7,0,3)<<endl;
	return 0;
}
