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
        ll a[n], b[k];
        for(ll i= 0 ; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0;i <k; i++){
            cin>>b[i];
        }
        ll ct = 0;
        if(k<n){
            ct=n-k;
        }
        sort(a, a+n);
        sort(b, b+k);
        ll i=0, j=0;
        while(i<n && j<k){
            if(a[i]>b[j]){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        if(i<n){
            ct+=((n-i));
            if(k<n){
                ct=ct-(n-k);
            }
        }
        
        cout<<ct<<endl;
    }
}