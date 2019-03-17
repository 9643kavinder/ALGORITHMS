#include<iostream>
using namespace std;
int main(){
	int initial;
	cout<<"ENTER THE INITIAL VALUE\n";
	cin>>initial;
	int final;
	cout<<"ENTER THE FINAL VALUE\n";
	cin>>final;
	int step;
	cout<<"ENTER THE STEP VALUE\n";
	cin>>step;
	int i = initial;
	cout<<"TABLE FOR FAHREHEIT TO CELSIUS IS :\n";
	
	while(i<=final){
		float C = (i-32)*5.00/9.00;
		cout<<i<<" - ";
		cout<<C<<endl;
		i = i + step;
	}
	
	return 0;
}
