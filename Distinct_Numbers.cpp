#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    // cin>>t;
    while(t--){
            ll n;
            cin>>n;
            ll a[n];
            map<ll, ll> mp;
            for(ll i = 0; i<n; i++){
                cin>>a[i];
                mp[a[i]]++;
            }
            ll ct = 0;
            for(auto &it : mp){
                if(it.second!=0) ct++;
            }
            cout<<ct<<endl;
            //cout<<mp.count(!0)<<endl;
        }
    
}