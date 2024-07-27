#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        ll x;
        if(n%2==0){
            x=n/2;
        }
        else x=(n/2)+1;
        // for(ll i = 0; i<x; i++){
        //     a[i]=(2*i)+1;
        // }
        // ll y=2;
        // for(ll i = x; i<n; i++){
        //     a[i]=y;
        //     y+=2;
        // }
        // for(ll i = 0; i<n; i++){
        //     cout<<a[i]<<" ";
        // }
        if(k<=x) cout<<1+(2*(k-1))<<endl;
        else cout<<2+(k-x-1)*2<<endl;
    }
}