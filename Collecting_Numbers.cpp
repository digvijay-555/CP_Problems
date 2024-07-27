#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        multiset<ll>ms;
        ll r = n;
        ms.insert(a[0]);
        for(ll i = 1; i<n; i++){
            ms.insert(a[i]);
            if(ms.find(a[i]-1)!=ms.end()){
                r--;
            }
        }
        cout<<r<<endl;
    }
}