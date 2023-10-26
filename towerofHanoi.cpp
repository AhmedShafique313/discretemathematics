#include <iostream>
using namespace std;
// function for moving disks //
void towerofHanoi(int n, string src, string hel, string des){
	//base case//
	if(n==1){
		cout<<n<<" Disk transfer from "<<src<<" To "<<des<<endl;
		return;
	}
	towerofHanoi(n-1, src, des, hel);
	cout<<n<<" Disk transfer from "<<src<<" To "<<des<<endl;
	towerofHanoi(n-1, hel, src, des);
}
// main function //
int main (){
	int n=3;
	towerofHanoi(n,"source","helper","destination");
	return 0;
}
