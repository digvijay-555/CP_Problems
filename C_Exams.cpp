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
        vector<pair<ll,ll>> vp(n);
        for(ll i = 0; i<n; i++){
            cin>>vp[i].first>>vp[i].second;
        }
        sort(vp.begin(), vp.end());
        ll x = vp[0].second;
        for(ll i = 1; i<n; i++){
            if(vp[i].second>=x){
                x=vp[i].second;
            }
            else{
                x=vp[i].first;
            }
        }
        cout<<x<<endl;
    }
}