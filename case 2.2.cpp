#include <iostream>
#include <ctime>
using namespace std;
int main () {
	int x, i;
	cout << "Enter the number: ";
	cin >> x;
	for (i=2; i<=(x/2); i++) {
		if (x%i==0) {
			cout << "Its not Prime Number";
			return 0;
		}
	}
	cout << "It is prime Number\n";
	cout << time(NULL);
	return 0;
}

