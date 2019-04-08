// Bubble Sort using recursion
#include<iostream>
using namespace std;
void BubbleSort(int *a, int n, int i){
	//base case
	if(i==n){
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
	for(int j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
					}
	}
	BubbleSort(a, n, i+1);
}
void BubbleSort2(int *a, int n, int j){
	if(n==1){
		return;
	}
	if(j==n-1){
		return BubbleSort2(a,n-1,0);
	}
	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}
	return BubbleSort2(a,n,j+1);
}
int main(){
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	BubbleSort2(a,n,0);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
