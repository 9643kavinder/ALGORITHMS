// Recursion array is sorted

#include<iostream>
using namespace std;
void sort(int a[100], int n){
	if(n==0){
		return;
	}
	
	for(int i=0; i<n-1; i++){
		if(a[n-1]<a[i]){
			swap(a[n-1], a[i]);
		}
	}
	sort(a, n-1);
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	
	return 0;
}
