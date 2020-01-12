#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll i = 1;
        ll j = n;
        while(i<=j){
            if(i==j){
                cout<<a[i]<<" ";
            }
            else{
            cout<<a[j]<<" "<<a[i]<<" ";
            }
            i++;
            j--;
        }
        cout<<endl;
    }


    return 0;
}
