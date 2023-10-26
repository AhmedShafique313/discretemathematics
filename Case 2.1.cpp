#include <iostream>
#include <ctime>
using namespace std;
int main () {
	int x, i;
	cout << "Enter the number: ";
	cin >> x;
	for (i=2; i<=x; i++) {
		if (x%i==0) {
			cout << x << " Its not Prime Number" << endl;
			return 0;
		}
	}
	cout << x << " It is prime Number\n" << endl;
	cout << time(NULL);
	return 0;
}

