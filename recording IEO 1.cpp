#include <iostream>
using namespace std;
int main () {
	int arr[5], i;
	int smallest=INT_MAX;
	float per, discount;
	cout<< "Enter your ages"<<endl;
	for (i=0; i<5; i++){
		cin>> arr[i];
		if (arr[i]<smallest){
			smallest=arr[i];
		}
	}
	per=smallest*0.50;
	discount=50-per;
	cout<<smallest<<endl;
	cout<<per<<endl;
	cout<<"Total price along with discount offer on each family is"<<discount<<endl;
	return 0;
}
