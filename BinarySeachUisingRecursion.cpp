// Binary Search using recursion
#include<iostream>
using namespace std;
int BinarySearch(int *a, int key, int n, int i){
	// base case
	if(i>n){
		return -1;
		
	}
	
	int mid = i+n/2;
	if(a[mid]==key){
		return mid;
	}
	if(a[mid]>key){
		return BinarySearch(a, key, mid-1, i);
	}
	return BinarySearch(a, key, n, mid+1);
}
int main(){
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	int ans = BinarySearch(a, key, n, 0);
	if(ans == -1){
		cout<<"Key not found!!";
	}
	else{
		cout<<"Key found at "<<ans+1;
	}
	
	
	return 0;
}
