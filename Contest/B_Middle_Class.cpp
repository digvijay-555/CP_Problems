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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll sm = 0, mx = 0;
        for(ll i = n-1; i>=0; i--){
            sm+=a[i];
            if(sm>=(n-i)*k){
                mx++;
            }
            else break;
        }
        cout<<mx<<endl;
    }
}