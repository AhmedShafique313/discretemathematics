#include <iostream>
using namespace std;
int main () {
	int x;
	cout<<"Enter the number to make rows and columns equal"<<endl;
	cin>>x;
	for (int i=0;i<=x;i++){
		for (int j=1;j<=x+1-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
