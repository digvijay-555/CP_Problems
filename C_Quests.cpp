#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n], b[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i<n; i++){
            cin>>b[i];
        }

        ll sum = 0;
        ll ch = 0;
        ll mx= 0;
        for(ll i=  0; i<min(n,k); i++){
            sum+=(a[i]);
            mx=max(mx, b[i]);
            ch=max(ch, sum+((k-i-1)*mx));
        }

        cout<<ch<<endl;
    }
}