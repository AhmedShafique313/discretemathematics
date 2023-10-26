#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/*void dispalyingX(int n1,vector<int>&X){
	for(int i=0;i<n1;i++){
		cout<<X[i]<<endl;
	}

}
void displayingY(int n2, vector<char>&Y){
	for(int i=0;i<n2;i++){
		cout<<Y[i]<<endl;
	}
}*/

int main (){
	int n1;cout<<"Enter N number of size of vector X: ";cin>>n1;
	cout<<endl;
	int n2;cout<<"Enter N number of size of vector Y: ";cin>>n2;
	cout<<endl;
	int arr[]={};
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<2;i++){
		cin>>arr[i];
	}
	vector<bool> X;
	vector<bool>Y;
	for(int i=0;i<n1;i++){
		X.push_back(i);
	}

	cout<<endl;
		for(int i=0;i<n2;i++){
		Y.push_back(i);
	}
	cout<<endl;
	//dispalyingX(n1,X);
	//displayingY(n2,Y);
	int size=X.size()*Y.size();
	cout<<size<<endl;
	for(int i=0;i<size;i++){
		cout<<X[i]<<" "<<Y[i]<<endl;
	}


	return 0;
}
