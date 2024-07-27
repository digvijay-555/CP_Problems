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
        for(ll i =0; i<n; i++){
            cin>>vp[i].first>>vp[i].second;
            if(vp[i].second < -1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
}