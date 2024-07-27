#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll diff[n];
        diff[0] = 0;
        for(ll i = 1; i<n; i++){
            if(a[i]<a[i-1]){
                diff[i] = a[i-1]-a[i];
                a[i]=a[i-1];
            }
            else{
                diff[i]=0;
            }
        }
        sort(diff, diff+n);

        // for(ll i =0; i<n; i++){
        //     cout<<diff[i]<<" ";
        // }
        // cout<<endl;
        ll st = 0;
        for(ll i =0; i<n; i++){
            if(diff[i]!=0){
                st = i;
                break;
            }
        }
        //cout<<st;
        bool flag = false;
        if(st == n-1 && diff[st]==0) {
            cout<<0<<endl;
            flag = true;
        }
        ll ct = 0;
        ll tt = 0;
        while(st!=n){

            if(diff[st == 0]){
                st++;
            }
            else{
                diff[st]-=tt;
                ct+=(n-st+1)*diff[st];
                tt+=diff[st];
                ll x = diff[st];
                st++;
            }
            
        }
        if(!flag){
            cout<<ct<<endl;
        }
        
        

    }
}