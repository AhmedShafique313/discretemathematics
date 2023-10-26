#include <iostream>
using namespace std;
int main (){
	cout<<"Enter the Rhombus Entry "<<endl;
	int x;
	cin>>x;
	for (int i=1;i<=x;i++){
		for (int j=1;j<=x-i;j++){
			cout<<" ";
		}
		for (int j=1;j<=x;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
