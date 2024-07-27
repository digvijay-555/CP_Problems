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
        multiset<ll> tp;
        for(ll i =0; i<n; i++){
            ll x;
            cin>>x;
            tp.insert(x);
        }
        ll b[m];
        for(ll i = 0; i<m; i++){
            cin>>b[i];
        }
        for(ll i = 0; i<m; i++){
            ll max = b[i];
            auto it = tp.upper_bound(max);

            if(it == tp.begin()){
                cout<<-1<<endl;
            }
            else{
                it--;
                cout<<*it<<endl;
                tp.erase(it);
            }
        }
        
    }
}