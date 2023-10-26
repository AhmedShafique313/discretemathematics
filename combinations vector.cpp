#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// We need only single vector for combinations,so
typedef vector<int> vec;
// defing class for combinations value storing
class combinations{
	public:
		const int arr[]={0,1};
		// defining solution vector into vector v
		vector< vec >solution;
		// creating combinations function
		void create_combination{
			// using queue library to make queue of functions
			queue<vec>comb;
			// another vector for storing data
			vector<int>test;
			// storing array elements in vector test vector
			for(int i=0;i<arr.length();i++){
				test.push_back(arr[i]);
			}
			// pushing back test vector to queue comb vector
			comb.push(test);
			// declaring number
			int num;
			// infinety loop for making combinations
			while(1){
				for(int i=0;i<arr.length();i++){
					// now i accessing first elements of list of vector and array
					test=comb.front();
					num=test[i];
					test.erase(test.begin()+i);
					test.push_back(num);
					comb.push(test);
					solution.push_back(test);
				}
				comb.pop();
				if(comb.front()[2]==num[2]){
					break;
				}
			}
		}
	
	
};

// main function
int main (){
	combinations combinations;
	combinations.create_combinations();
	vector<vec>combinations=combinations.solution;
	for(int i=0;i<=5;i++){
		for(int j=0;j<combinations.arr.length;j++){
			cout<<comb[i].at[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
