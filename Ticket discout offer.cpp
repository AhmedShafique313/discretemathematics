#include <iostream>
using namespace std;

int main() {
	int disc[5], i;
	float per, discount;
	cout << "Enter your ages" << endl;
	int smallest=INT_MAX;	
	for (i=0; i<5; i++){
		cin >> disc[i];
		if (disc[i]<smallest){
			smallest=disc[i];
		}
	}

	cout<<smallest<< "is smallest age." <<endl;
	per=smallest*0.50;
	cout<<per<<"Percent"<<endl;
	discount=50-per;
	cout<<"Total Price with discount is:"<<discount<<endl;

	return 0;
}
