#include<iostream>
using namespace std;
int main(){
	int a[100],n;
	cout<<"ENTER THE LIMIT OF NUMBERS";
	cin>>n;
	cout<<"ENTER THE VALUE OF NUMBERS";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum + a[i];
	}
	float mean = sum/n;
	cout<<"THE MEAN OF THE ARRAY IS:";
	cout<<"\n"<<mean<<"\n";
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout<<"THE SORTED ARRAY :"<<"\n";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	
	return 0;
}
