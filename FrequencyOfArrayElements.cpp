#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    int temp[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp[i] = -1;
    }
    int count;
    for(int i=0;i<n;i++){
        count = 1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                temp[j] = 0;
            }
           
        }
         if(temp[i]!=0){
                temp[i] = count;
            }
    }
    for(int i=0;i<n;i++){
        if(temp[i]!=0){
            cout<<"the element "<<a[i]<<" has frequency of "<<temp[i]<<endl;
        }
    }
}

