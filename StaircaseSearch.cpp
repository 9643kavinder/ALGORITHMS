// StairCase Search

#include<iostream>
using namespace std;
void readmatrix(int arr[][10], int row, int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
}
bool StaircaseSearch(int arr[][10], int row, int col, int key){
	int i=0;
	int j=col-1;
	while(i<row && j>0){
			if(arr[i][j]==key){
				return true;
			}
			if(arr[i][j]<key){
				i++;
			}
			if(arr[i][j]>key){
				j--;
			}
		}
		return false;
}
int main(){
	int arr[10][10];
	int row, col;
	cout<<"Enter the Number of rows and columns\n";
	cin>>row>>col;
	int key;
	cout<<"Enter the key to search";
	cin>>key;
	readmatrix(arr, row, col);
	if(StaircaseSearch(arr, row, col, key)){
		cout<<"Key Found"<<endl;
	}
	else{
		cout<<"Key Not Found"<<endl;
	}
	
//	PrintMatrix(arr, row, col);
	return 0;
}
