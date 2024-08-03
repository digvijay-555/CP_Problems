#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<pair<ll, ll>> vp(n);
        for(ll i = 0; i<n; i++){
            cin>>vp[i].first>>vp[i].second;
        }
        ll a[m];
        for(ll i = 0; i<m; i++){
            cin>>a[i];
        }
        vector<ll> b(n);
        b[0]=vp[0].first*vp[0].second;
        if(n==1){
            for(ll i = 0; i<m; i++){
                cout<<1<<endl;
                
            }
            continue;
        }
        for(ll i = 1; i<n; i++){
            b[i]=b[i-1]+(vp[i].first*vp[i].second);
        }
        for(ll i =  0; i<m; i++){
            auto it = lower_bound(b.begin(), b.end(), a[i]);
            cout << distance(b.begin(), it) + 1 << endl;
        }
    }
}