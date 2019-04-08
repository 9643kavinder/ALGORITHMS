// Randomized Quick sort 
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void shuffle(int *a, int s, int e){
	srand(time(NULL));
	int i,j,temp;
	for(int i=e;i>0;i--){
		j = rand()%(i+1);
		swap(a[i], a[j]);
			}
}
int partition(int *a, int s , int e){
	int i = s-1;
	int j= s;
	int pivot = a[e];
	for(;j<e;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}
void quicksort(int *a, int s, int e){
	// base case
	if(s>=e){
		return;
	}
	int p = partition(a,s,e);
	quicksort(a,s,p-1);
	quicksort(a,p+1,e);
}
int main(){
	int n = 9;
	int a[100] = {1,2,3,4,5,6,7,8,9};
	shuffle(a,0,n-1);
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
