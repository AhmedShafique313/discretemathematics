#include <iostream>
using namespace std;
// I am declaring main function to get input from user //
int main (){
	int n, arr[n], arar[n];

	cout<<"Enter number of elements in array: ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter 1st "<<i+1<<" array element:  "<<endl;
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		cout<<"Enter 2nd "<<j+1<<" array element: "<<endl;
		cin>>arar[j];
	}
	int temp=arr[n];
	arr[n]=arar[n];
	arar[n]=temp;
	cout<<"1st array: "<<arr[n];
	cout<<endl;
	cout<<"2nd array: "<<arar[n];
	cout<<endl;
	return 0;
}
