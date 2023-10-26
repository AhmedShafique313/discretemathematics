#include <iostream>
using namespace std;
bool isSafe(int row, int col,vector<vector<int>>& board, int val){
	for(int i=0;i<board.size();i++){
		if(board[row][i]==val){
			return false;
		}
		if(board[i][col]==val){
			return false;
		}
		if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val){
			return false;
		}
	}
}
bool solveSodoku(vector<vector<int>>& board){
	int n=board[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//checking if cells are empty
			if(board[row][col]==0){
				for(int val=1;val<=9;val++){
					if(isSafe(row,col,board,val)){
						board[row][col]=[val];
						// next if solution ofremaining is possible
						bool put=solveSodoku(board);
						if(put){
							return true;
						}
						else{
							//back track
							board[row][col]=0;
						}
					}
				}
				return false;
			}
		}
	}
	return true;
}
void SolveSodoku(vector<vector<int>>& Sodoku){
	solve(sodoku);
}
