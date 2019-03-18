#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n, MaxSum=0, temp=0, left=-1, right=-1;
	cout<<"ENTER THE SIZE OF ARRAY\n";
	cin>>n;
	cout<<"ENTER THE VALUE IN ARRAY [MAX:VALUEOF(n)] \n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"THE SUM OF MAXIMUM SUBARRAY IS : ";
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			temp = 0;
			for(int k=i;k<=j;k++){
				temp = temp + a[k];
			}
			if(temp>=MaxSum){
				MaxSum = temp;
				left = i;
				right = j;
			}
		
		}
	}
	cout<<MaxSum;
	cout<<"\nThe Maximum sum array is : \n";
	for(int k=left;k<=right;k++){
		cout<<a[k]<<" ";
	}
	
	
	
	return 0;
}
