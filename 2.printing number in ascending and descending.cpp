// printing number in ascending and descending order //
#include <iostream>
using namespace std;
//1. in ascending //
void inc(int n){
	//3. base case //
	if(n==0){
		return;
	}
	//2. conditional //
	inc(n-1);
	cout<<n<<endl;
}
// same as ascending //
void dec(int n){
	//5. base case //
	if(n==0){
		return;
	}
	//4. conditional //
	cout<<n<<endl;
	dec(n-1);
}
//6. main //
int main (){
	int n;
	cin>>n;
	inc(n);
	dec(n);
	return 0;
}

