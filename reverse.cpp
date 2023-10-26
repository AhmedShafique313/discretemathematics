#include <iostream>
using namespace std;
int main(){
	int n, reverse,last;
	cin>>n;
	while(n>0){
		last=n%10;
		reverse=reverse*10+last;
		n=n/10;
	}
	cout<<reverse<<endl;
	return 0;
}
