#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void print(ll *p, ll *q, ll x, ll y){
    ll n =0;
    ll m = 0;
    while(n<=x-1 && m<=y-1){

        if(p[n]<=q[m]){
            cout<<p[n]<<" ";
            n++;
        }
        else{
            cout<<q[m]<<" ";
            m++;
        }
    }
    while(n<=x-1){
        cout<<p[n]<<" ";
        n++;
    }
    while(m<=y-1){
        cout<<q[m]<<" ";
        m++;
    }
    cout<<endl;
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll p[x+1];
        ll q[y+1];
        for(ll i=0;i<x;i++){
            cin>>p[i];
        }
        for(ll i=0;i<y;i++){
            cin>>q[i];
        }
        print(p,q,x,y);
    }
}
