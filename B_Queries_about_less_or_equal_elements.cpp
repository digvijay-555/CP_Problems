#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll> a(n);
        vector<ll> b(m);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i<m; i++){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        for(ll i=  0; i<m; i++){
            cout<<upper_bound(a.begin(), a.end(), b[i])-a.begin()<<" ";
        }
    }
}