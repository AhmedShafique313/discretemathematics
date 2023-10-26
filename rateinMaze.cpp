#include <iostream>
using namespace std;
// can we move right and down or not //
bool isSafe(int**arr, int x, int y, int n){
	// 2d array, right, down, blocks//
	if(x<n && y<n && arr[x][y]==1){
		// in rows , in cloumns and if can we move then print 1 //
		return true;
	}
	return false;
} 

// now a function consist of backtracking and output position estimation //
int rateinMaze(int**arr, int x, int y, int n, int** solArr){
	
	// base case //
	if(x==n-1 && y==n-1){
		solArr[x][y]=1;
		return true;
		// if rat reached the position so output will stores in solArr//
	}
	if(isSafe(arr,x,y,n)){
		solArr[x][y]=1;
		if(rateinMaze(arr,x+1,y,n,solArr)){
			return true;
			// agar mei right move krta hoo tu mujhe end point milta hai tu theek hai warna //
		}
		if(rateinMaze(arr,x,y+1,n,solArr)){
			// mei down move karonga //
			return true;
		}
		solArr[x][y]=0;
		// backtracking //
		return false;
			
	}
}
// main function //
int main () {
	// maze consist of 5*5 blocks //
	cout<<"***   Development By IEO   ***"<<endl;
	int n;
	cout<<"Enter number: ";
	cout<<endl;
	cin>>n;
	// defining 2d array //
	int**arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	}
	
	// taking input //
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	// defining and intializing solArr as 0 //
	int** solArr=new int*[n];
	for(int i=0;i<n;i++){
		solArr[i]=new int[n];
		for(int j=0;j<n;j++){
			solArr[i][j]=0;
		}
	}
	cout<<"Rate in Maze Solution. suppose rat is travelling is represented by(1) and not by(0) Gotcha"<<endl;
	// calling and printing solArr //
	if(rateinMaze(arr,0,0,n,solArr)){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<solArr[i][j]<<" ";
			}cout<<endl;
		}
	}
	
	return 0;
}


