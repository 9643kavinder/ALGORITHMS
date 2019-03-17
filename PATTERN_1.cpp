/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ENTER THE NUMBER";
	cin>>n;
	int val =1;
	for(int i=0;i<=n;i++){
		int j=1;
		for(j=1;j<=i;j++){
			cout<<val<<" ";
			val++;
		}
		cout<<"\n";
	}
	return 0;
}
