#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n, ams=0;
	cin>>n;
	int orig=n;
	while(n>0){
		int last=n%10;
		ams+=pow(last,3);
		n=n/10;
	}
	if(ams==orig){
		cout<<"Amstrong"<<endl;
	}
	else
	{
		cout<<"Not"<<endl;
	}
	return 0;
}
