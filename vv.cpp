#include<iostream>
#include<vector>
using namespace std;
void dispalying(int n1,vector<int>&X){
	for(int i=0;i<n1;i++){
		cout<<X[i]<<" ";
	}
	cout<<endl;
int main () {
	int n1;cout<<"Enter N number of size of vector X: ";cin>>n1;
	cout<<endl;
	int n2;cout<<"Enter N number of size of vector Y: ";cin>>n2;
	cout<<endl;
	vector<int> X;
	vector<char>Y;
	for(int i=0;i<n1;i++){
		X.push_back(i);
	}

	cout<<endl;
		for(int i=0;i<n2;i++){
		Y.push_back(i);
	}
	for(int i=0;i<n2;i++){
		cout<<Y[i]<<" ";
	}
	cout<<endl;
}
	dispalying(n1,X);


	return 0;
}
