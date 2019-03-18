// Rotate String By n Characters [Method : 1]

#include<iostream>
using namespace std;
int main(){
	string str = "CodingBlocks";
	int len = str.length();
	int n;
	cout<<"Enter The Value Of n : \n";
	cin>>n;
	string temp;
	for(int i=len-n;i<len;i++){
		temp = temp + str[i];
	}
	char b[1000];
	for(int i=0;i<len-n;i++)
	{
		b[i]=str[i];
	}
	str = temp + b;
	cout<<str;
	
	return 0;
}
