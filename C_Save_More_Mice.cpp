#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[k];
        for(ll i = 0; i<k; i++){
            cin>>a[i];
        }
        sort(a,a+k);
        ll ct = 0;
        ll bsum = 0;
        bool flag = false;
        for(ll i = k-1; i>=0; i--){
            
            if(bsum<a[i]){
                ct++;
            }
            else {
                cout<<ct<<endl;
                flag=true;
                break;
            }
            bsum+=(n-a[i]);
        }
        if(!flag){
            cout<<ct<<endl;
        }
    }
}