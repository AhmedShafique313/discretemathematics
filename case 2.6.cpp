#include <iostream>
using namespace std;
// make the iteration function //
void primeSieve(int n) {
	int prime[100]={0};

	// I define the array of 100 char's //
	// if prime no. = 0 then it is prime no. and we multiply it and marks its multiples as constraits//
	for (int i=2; i<=n; i++) {
		// iteration loop//
		if (prime[i]==0) {
			for (int j=i*i; j<=n; j+=i) {
				// we again use iteration and then we get the square of it and also add squares to original//
				prime[j]=1;
			}
		}
	}
	// printing iteration //
	for (int i=2; i<=n; i++){
		if (prime[i]==0){
			cout << i << " ";
		}
	}cout << endl;
	// to repeat the printing//
}


// The main function //
int main () {
	int n;
	cout << "Enter the Number :";
	cin >> n;
	cout<<endl;
	
	primeSieve(n);
	return 0;
}
