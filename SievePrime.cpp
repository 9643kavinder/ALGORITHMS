#include<iostream>
using namespace std;
void primeSieve(int *p , int n){
	p[0] = 0;
	p[1] = 0;
	p[2] = 1;
	
	for(int i=3;i<=n;i+=2){
		p[i] = 1;
	}
	
	for(int i=3;i<=n;i+=2){
		if(p[i]){
			for(int j=i*i;j<=n;j+=2*i){
				p[j] = 0;
			}
		}
	}
	return;
}
int main(){
	int n;
	n = 100;
	int N = 100000;
	int p[N+1] = {0};
	primeSieve(p,100);
	for(int i=0;i<n;i++){
		if(p[i]){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
