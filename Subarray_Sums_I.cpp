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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll st = 0;
        ll end = 0;
        ll sum=a[0];
        ll ct = 0;
        while(end<n && st<n){
            if(sum>m){
                sum-=a[st];
                st++;
            }
            
            else if(sum==m){
                sum-=a[st];
                st++;
                ct++;
            }
            else{
                end++;
                if(end < n) sum+=a[end];
            }
        }
        cout<<ct<<endl;
    }
}