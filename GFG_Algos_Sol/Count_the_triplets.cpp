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
         sort(a,a+n);
         ll count = 0;
         ll j,k;
         for(ll i=n-1;i>1;i--){
             j = 0;
             k = i-1;
             while(j<k){
                 if(a[j]+a[k] == a[i]){
                     count++;
                     j++;
                     k--;
                 }
                 else if(a[j]+a[k] < a[i]){
                     j++;
                 }
                 else{
                     k--;
                 }
             }

         }
         if(count==0){
                 cout<<"-1"<<endl;
             }
             else{
                 cout<<count<<endl;
             }

    }
}
