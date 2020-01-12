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
        for(ll i=0;i<n-1;i++){
            cin>>a[i];
        }
        sort(a,a+n-1);

        ll x = 1;
        ll value = 0;
        for(ll i=0;i<n-1;i++){
            if(x!=a[i]){
                value = x;
                break;
            }
            x++;
            // cout<<x<<endl;

        }
        if(value==0){
            cout<<n<<endl;
        }
        else{
            cout<<value<<endl;
        }

    }
	return 0;
}
