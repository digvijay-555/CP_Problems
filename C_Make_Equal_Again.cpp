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
        for(ll i =0; i<n; i++){
            cin>>a[i];
        }
        ll st = 1;
        for(ll i = 1; i<n; i++){
            if(a[i]==a[i-1]){
                st++;
            }
            else break;
        }
        ll ed = 1;
        for(ll i=n-2; i>0; i--){
            if(a[i]==a[i+1]){
                ed++;
            }
            else break;
        }
        if(a[0]==a[n-1] && ed+st<=n){
            cout<<n-(ed+st)<<endl;
        }
        else{
            cout<<n-max(st,ed)<<endl;
        }
    }
}