// Kadane's Algorithm for Maximum sum of subarray
#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n, cursum=0, maxsum=0;
	cout<<"Enter the Size of Array\n";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cursum = cursum + a[i];
		if(cursum<0){
			cursum = 0;
		}
		maxsum =max(cursum,maxsum);
	}
	cout<<"The Maximum Sum of Subarray is : "<<maxsum;
	return 0;
}
