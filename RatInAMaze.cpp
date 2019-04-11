// Rat in a maze

#include<iostream>
using namespace std;
const int D=5;
bool isSafe(int in[D][D],int out[D][D],int m, int n,int i,int j){
	while(i<m && j<n){
		if(in[i][j]==1){
			return false;
		}
		else{
			return true;
		}
	}
	return false;
}
bool RatInAMaze(int in[D][D],int out[D][D],int m, int n, int i, int j){
	// base case
	if(i == m-1 && j == n-1){
		out[m-1][n-1]=1;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<out[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<"--------------------";
		cout<<endl;
		return false;
	}
	out[i][j] = 1;
	//recursive case
	if(isSafe(in,out,m,n,i,j+1)){
		bool success = RatInAMaze(in,out,m,n,i,j+1);
		if(success==true){	
		return true;
		}
		
	}
	if(isSafe(in,out,m,n,i+1,j)){
		bool success = RatInAMaze(in,out,m,n,i+1,j);
		if(success==true){	
		return true;
	}
}
	out[i][j]=0;
	return false;

}
int main(){
	int out[5][5] = {0};
	int m;
	cin>>m;
	int n;
	cin>>n;
	int in[5][5] = {{0,0,0,0,1},{0,1,0,1,0},{0,0,0,1,0},{1,0,0,0,0},{1,0,0,0,0}};

	RatInAMaze(in,out,m,n,0,0);
	
	
	
	return 0;
}
