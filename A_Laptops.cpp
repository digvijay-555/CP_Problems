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
        vector<pair<ll, ll>> vp(n);
        for(ll i = 0; i<n; i++){
            cin>>vp[i].first;
            cin>>vp[i].second;
        }
        
        bool flag = false;
        sort(vp.rbegin(), vp.rend());
        for(ll i = 1; i<n; i++){
            if(vp[i].second>vp[i-1].second){
                flag = true;
                cout<<"Happy Alex"<<endl;
                break;
            }
        }
        if(!flag) cout<<"Poor Alex"<<endl;

    }
}