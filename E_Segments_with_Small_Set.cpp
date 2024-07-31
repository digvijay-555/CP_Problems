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
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        map<ll, ll> mp;
        ll l = 0, ct = 0;
        for(ll i = 0; i<n; i++){
            mp[a[i]]++;
            while(mp.size()>k){
                mp[a[l]]--;
                if(mp[a[l]]==0){
                    mp.erase(a[l]);
                }
                l++;
            }
            ct+=(i-l+1);
        } 
        cout<<ct<<endl;
    }
}