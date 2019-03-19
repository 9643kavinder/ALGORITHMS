// Check If A String Is Permutation Of Other Or Not

#include<iostream>
#include<cstring>
using namespace std;
bool IsPermutation(char *s1, char *s2){
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if(l1!=l2){
		return false;
	}
	int freq[26] = {0};
	for(int i=0;i<l1;i++){
		freq[s1[i]-'a']++;
	}
	for(int i=0;i<l2;i++){
		freq[s2[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(freq[i]!=0){
			return false;
		}
	}
	return true;
}
int main(){
	char s1[100];
	char s2[100];
	cout<<"Enter The Two Strings\n";
	cin>>s1>>s2;
	if(IsPermutation(s1, s2)){
		cout<<"The Two Strings Are Permutation Of Each Other"<<endl;
	}
	else{
		cout<<"No, The Strings Are Not Permuation Of Each Other"<<endl;
	}

	return 0;
}
