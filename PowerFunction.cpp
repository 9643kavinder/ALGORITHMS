// Power Function Using Recursion
#include<iostream>
using namespace std;
int powerFunction(int number, int n){
	// Base Case
	if(n==0){
		return 1;
	}
	int ans = number*powerFunction(number, n-1);
	return ans;
}
int FastPower(int number, int n){
	// base case
	if(n==0){
		return 1;
	}
	int smallAns = Fa  stPower(number, n/2);
	smallAns *= smallAns;
	if(n&1){
		return number*smallAns;
	}
	return smallAns;
}
int main(){
	int n;
	 cin>>n;
	 int number;
	 cin>>number;
	 int ans = FastPower(number, n);
	cout<<ans;
	
	
	return 0;
}
