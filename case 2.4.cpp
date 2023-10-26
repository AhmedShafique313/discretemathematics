#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;
int main (){
	int x;
	int i;
	cout << "Enter Number :";
	cin >> x;
	if (x%2==0) {
		cout << x << " It is not a prime number" << endl;
	return 0;
	}
	else
	{
		for (i=3; i<=(sqrt(x)); i=i+2) {
			if (x%i==0) {
				cout << x << " It is not a prime Number" << endl;
				cout << time(NULL);
				return 0;
			}
		}
		cout << x << " It is prime Number " << endl;
	}
	cout << time(NULL);
	return 0;
}
