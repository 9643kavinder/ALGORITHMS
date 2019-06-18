#include<iostream>
using namespace std;
int find(int a,int b){
	if(b==0){
		return a;
	}
	find(b,a%b);
}
int main(){
	int a = 10;
	int b = 12;
	int GCD_VALUE = find(a,b);
	cout<<GCD_VALUE;
	return 0;
}
