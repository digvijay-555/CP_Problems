#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<int, ll> mp;
        for(ll i =0; i<s.length(); i++){
            mp[s[i]-64]++;
        }
        ll x = 0;
        for(ll i = 1; i<8; i++){
            if(mp[i]<m){
                x+=(m-mp[i]);
            }
        }
        cout<<x<<endl;
    }
}