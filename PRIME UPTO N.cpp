/* PRINT ALL THE PRIME NUMBERS FROM 2 TO N */

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ENTER THE VALUE OF N";
	cin>>n;
	cout<<"THE PRIME NUMBERS FROM 2 TO N ARE"<<"\n2\n";
	for(int i=3;i<=n;i++){
		for(int j=2;j<n;j++){
			if(i%j==0){
			break;
			}
			else{
				if(i==j+1){
					cout<<i<<endl;
				}
			}
		}
	}
	
	
	return 0;
}
