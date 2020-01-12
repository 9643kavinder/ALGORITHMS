#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        ll a[n+1];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll index = 1;
        ll sum = 0;
        int flag = 0;
        for(ll j=1;j<=n;j++){
            sum = sum+a[j];
             while(sum>s){
                    sum = sum-a[index];
                    index++;
                }
            if(sum==s){
                cout<<index<<" "<<j<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
    }


    return 0;
}
