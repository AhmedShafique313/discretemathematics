#include <iostream>
using namespace std;
// permutation and combination formula npr= n!/(n-r)! and nCr= n!/(n-r)*n! //
// factorial function//
int fact(int n){
	if(n>1){
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
// main function //
int main () {
	// inputs //
	int n, n1, n2, ans1, ans2, r, select;
	cout<<"Enter number: ";
	cin>>n;
	cout<<endl;
	cout<<"Enter value of r: ";
	cin>>r;
	cout<<endl;
	cout<<"Select the Following: "<<endl;
	cout<<"1. Permutation"<<endl;
	cout<<"2. Combination"<<endl;
	cin>>select;
	switch(select)
	{
		case 1:
		{
			n1=fact(n);
			n2=fact(n-r);
			ans1=n1/n2;
			cout<<"nPr = "<<ans1<<endl;		
		}
		case 2:
		{
			n1=fact(n);
			n2=fact(n-r)*fact(r);
			ans2=n1/n2;
			cout<<"nCr= "<<ans2<<endl;
		}
		default:
		{
       		cout<<"Kindly select correct choice...."<<endl;
		}		
	}
	return 0;
}
