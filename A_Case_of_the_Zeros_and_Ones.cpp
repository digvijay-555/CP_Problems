#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll zr = 0;
        ll on = 0;
        for(ll i = 0; i<n; i++){
            if(s[i]=='0') zr++;
            else on++;
        }
        ll x = min(zr, on);
        cout<<n-(2*x);
    }
}