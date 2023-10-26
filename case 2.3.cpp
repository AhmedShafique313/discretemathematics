#include <iostream>
#include <ctime>
using namespace std;
int main (){
	int x;
	int i;
	cout << "Enter Number :";
	cin >> x;
	if (x%2==0) {
		cout << " It is not a prime number" << x << endl;
	return 0;
	}
	else
	{
		for (i=3; i<=(x/2); i=i+2) {
			if (x%i==0) {
				cout << " It is not a prime Number" << x << endl;
				return 0;
			}
		}
		cout << " It is prime Number " << x << endl;
	}
	cout << time(NULL);
	return 0;
}
