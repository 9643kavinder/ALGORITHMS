// Reverse A String 
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str = "CodingBlocks";
	int len = str.length();
	for(int i=len;i>=0;i--){
		cout<<str[i];
	}
	
	return 0;
}
