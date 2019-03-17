/*
	ABCDEEDCBA
	ABCDDCBA
	ABCCBA
	ABBA
	AA
	
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ENTER THE NUMBER";
	cin>>n;
	for(int i=0;i<n;i++){
		char val = 'A';
		for(int j=1;j<=n-i;j++){
			cout<<val<<"";
			val++;
		}
		val--;
		for(int j=1;j<=n-i;j++){
			cout<<val<<"";
			val--;
		}
		cout<<endl;
	}
	
	
	return 0;
}
