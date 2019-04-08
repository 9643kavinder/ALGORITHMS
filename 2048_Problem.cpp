// 2048 Problem
#include<iostream>
using namespace std;
char spellings[][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void print(int n){
	// base case
	if(n==0){
		return;
	}
	print(n/10);
	cout<<spellings[n%10]<<"  ";
}
int main(){
	int n;
	cin>>n;
	print(n);
	
	
	return 0;
}
