#include<iostream>
using namespace std;
int main(){
	int n, cursum=0, left=-1, right=-1, maxsum=0, a[1000];
	cout<<"ENTER THE SIZE IN ARRAY\n";
	cin>>n;
	cout<<"ENTER THE VALUES IN ARRAY\n";
	int cumsum[100];
	a[0] = 1;
	cumsum[0] = a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumsum[i] = cumsum[i-1] + a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cursum = 0;
			cursum = cumsum[j] - cumsum[i-1];
			if(cursum>maxsum){
				maxsum = cursum;
				left = i;
				right = j;
			}
		}
	}
	cout<<"THE SUM OF MAXIMUM SUBARRAY IS : "<<maxsum;
	cout<<"\nTHE ARRAYS OF MAXIMUM SUM IS : \n";
	for(int k=left;k<=right;k++){
		cout<<a[k]<<" ";
	}
	return 0;
}
