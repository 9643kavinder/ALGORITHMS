// Print All The Substrings Of A string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[100];
	cout<<"Enter The String\n";
	cin>>s;
	int len = strlen(s);
	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){
			for(int k=i;k<=j;k++){
			cout<<s[k];
			}
			cout<<endl;
		}
	}
	return 0;
}
