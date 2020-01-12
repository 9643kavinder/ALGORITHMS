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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll cursum = 0;
        ll maxsum = INT_MIN;
        for(ll i=0;i<n;i++){
            cursum = max(a[i],a[i]+cursum);
            maxsum = max(cursum,maxsum);
        }
        cout<<maxsum<<endl;
    }

}
