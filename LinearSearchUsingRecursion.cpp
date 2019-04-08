// Linear search using recursion

#include<iostream>
using namespace std;
int linearSearch(int *a, int key, int i, int n){
	// base case
	if(i==n){
		return -1;
	}
	if(a[i]==key){
		return i;
	}
	return linearSearch(a, key, i+1, n);
}
int main(){
	int a[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cout<<endl;
	cout<<"Enter the key\n";
	cin>>key;
	int isFound = linearSearch(a, key, 0, n);
	if(isFound == -1){
		cout<<"key not found!!";
	}
	else{
		cout<<"key found at position - "<<isFound+1;
	}
	return 0;
}
