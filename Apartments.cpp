#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m, k;
        cin>>n>>m>>k;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll b[m];
        for(ll i = 0;i<n; i++){
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+m);

        ll ct = 0;
        ll i = 0;
        ll j = 0;
        while(i<n && j<m){
            if(b[j]>=a[i]-k && b[j]<=a[i]+k){
                ct++;
                i++;
                j++;
            }
            else if(b[j]<a[i]-k) j++;
            else if(b[j]>a[i]+k) i++;
        }
        cout<<ct<<endl;

    }
}