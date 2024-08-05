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
        ll a[n], c[n];
        vector<pair<ll, ll>> vp(n);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i<n; i++){
            cin>>vp[i].first;
            vp[i].second = i+1;
        }
        sort(vp.begin(), vp.end());
        for(ll i= 0; i<n; i++){
            c[i]=vp[a[i]-1].second;
        }
        // for(ll i=  0; i<n; i++){
        //     cout<<c[i]<<" ";
        // }

        ll mx=0;
        ll ct =0;
        for(ll i = 0; i<n; i++){
            if(c[i]<mx){
                ct++;
            }
            mx=max(mx, c[i]);
            
        }
        cout<<ct<<endl;


        
    }
}