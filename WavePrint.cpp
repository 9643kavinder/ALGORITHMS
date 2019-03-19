// Wave Print

#include<iostream>
using namespace std;
void readmatrix(int arr[][10], int row, int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
}
void PrintMatrix(int arr[][10], int row, int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

// Wave Print
void WavePrint(int arr[][10], int row, int col){
	for(int j=0;j<col;j++){
		if(j&1){
			// Odd column
			for(int i=row-1;i>=0;i--){
				cout<<arr[i][j]<<" ";
			}
		}
		else{
			for(int i=0;i<row;i++){
				cout<<arr[i][j]<<" ";
			}
		}
	}
}
int main(){
	int arr[10][10];
	int row, col;
	cout<<"Enter the Number of rows and columns\n";
	cin>>row>>col;
	readmatrix(arr, row, col);
	
	PrintMatrix(arr, row, col);
	
	WavePrint(arr, row, col);
	return 0;
}
