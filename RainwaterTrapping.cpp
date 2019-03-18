// Rainwater Trapping Problem

#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"Enter The Number Of Buildings\n";
	cin>>n;
	cout<<"Enter The Size of buildings\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int left[1000];
	left[0] = a[0];
	for(int i=1;i<n;i++){
		if(a[i]>left[i-1]){
			left[i] = a[i];
		}
		else{
			left[i] = left[i-1];
		}
	}
	int right[1000];
	right[n-1] = a[n-1];
	for(int i=n-2;i>=0;i--){
		if(a[i]>right[i+1]){
			right[i] = a[i];
		}
		else{
			right[i] = right[i+1];
		}
	}
	int water[1000];
	int UnitWater = 0;
	for(int i=0;i<n;i++){
		water[i] = min(left[i],right[i]) - a[i]; 
		UnitWater = UnitWater + water[i];
	}
	cout<<"The Unit Of Water Collected : "<<UnitWater;
	return 0;
}
