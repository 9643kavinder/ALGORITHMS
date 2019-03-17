/* PATTERN
	1
	0 1
	1 0 1
	0 1 0 1
	1 0 1 0 1
*/


#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ENTER THE NUMBER";
	cin>>n;
	int val,j;
	for(int i=0;i<=n;i++){
		if(i%2==0){
			val = 0;
		for(j=1;j<=i;j++){
		cout<<val<<" ";
		if(val==0){
			val = 1;
		}
		else{
			val = 0;
		}
		}
	}
	else{
			val = 1;
		for(j=1;j<=i;j++){
		cout<<val<<" ";
		if(val==0){
			val = 1;
		}
		else{
			val = 0;
		}
		}
	}
	cout<<endl;
	}
	
	return 0;
}
