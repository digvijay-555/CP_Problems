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
        ll a[n], b[m];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i<m; i++){
            cin>>b[i];
        }

        ll i=0, j= 0;
        ll ct=0;
        while(j<m){
            if(a[i]<b[j] && i<n){
                ct++;
                i++;
            }
            else{
                cout<<ct<<" ";
                j++;
            }

        }
    }
}