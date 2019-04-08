// Tower Of Hanoi

#include<iostream>
using namespace std;
void TowerOfHanoi(int n, char source, char destination, char helper){
	// Base Case
	if(n==0){
		return;
	}
	TowerOfHanoi(n-1,'A','C','B');
	cout<<"move "<<n<<" from source "<<source<<" to destination "<<destination<<endl;
	TowerOfHanoi(n-1,'C','A','B');
}
int main(){
	int n;
	cin>>n;
	TowerOfHanoi(n,'A','B','C');
	
	return 0;
}
