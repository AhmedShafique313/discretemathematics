#include <iostream>
using namespace std;
// reverse function //
void reverse(string a){
	if(a.length()==0){
		return;
	}
	// last to first //
	string z= a.substr(1);
	reverse(z);
	// print last to first//
	cout<<a[0];
}
// main funtion //
int main (){
	//call //
	string n;
	cin>>n;
	reverse(n);
	return 0;
}
