#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n], b[n+1];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i<n; i++){
            cin>>b[i];
        }
        ll sm = 0;
        bool flag = false;
        for(ll i = 0; i<n; i++){
            if(b[n]>=a[i] && b[n]<=b[i]){
                flag = true;
            }
            else if(b[n]<=a[i] && b[n]>=b[i]){
                flag = true;
            }
        }
        for(ll i = 0; i<n; i++){
            ll x = a[i]-b[i];
            if(x<0) x*=(-1);
            sm+=x;
        }

    }
}