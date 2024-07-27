#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll s[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            if(i!=0){
                s[i]=(a[i]+s[i-1]);
            }
            else s[i]=a[i];
        }
        // for(ll i = 0;i<n; i++){
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
        ll mx[n];
        ll max = 0;
        for(ll i = 0; i<n; i++){
            if(a[i]>max) max = a[i];
            mx[i] = max;
        }
        ll ct = 0;
        for(ll i = 0; i<n; i++ ){
            if(s[i]==2*mx[i]) ct++;
        }
        cout<<ct<<endl;
                                           
    }
}