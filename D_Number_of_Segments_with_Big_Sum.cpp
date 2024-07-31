#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, s;
        cin>>n>>s;

        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll ct=0;
        ll curSum=0;
        ll i = 0, j = 0;
        while(j<=n){
            if(curSum<s){
                curSum+=a[j];
                j++;
            }
            else{
                ct+=n-j+1;
                curSum-=a[i];
                i++;
            }
            
        }
        cout<<ct<<endl;

    }
}