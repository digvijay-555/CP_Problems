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
        for(ll i = 0;i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll ct = 0;
        ll i = 0, j = n-1;
        while(i<j){
            if(a[i]+a[j]<=m){
                ct++;
                j--;
                i++;
            }
            else{
                j--;
            }
        }
        ll rm = n-(2*ct);
        //cout<<ct<<endl;
        //cout<<rm<<endl;
        cout<<ct+rm<<endl;
    }
}