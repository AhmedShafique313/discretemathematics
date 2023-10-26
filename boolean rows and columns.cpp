#include <iostream>
using namespace std;
int main () {
	int x;
	cout<<"Enter the number to print boolean rows and columns"<<endl;
	cin>>x;
	for (int i=0;i<=x;i++){
		for (int j=1;j<=i;j++){
			if ((i+j)%2==0){
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}
