#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        
        ll m;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        multiset<ll> msb;
        for(ll i = 0; i<n; i++){
            cin>>b[i];
            msb.insert(b[i]);
        }
        cin>>m;
        ll d[m];
        multiset<ll> ms;
        for(ll i = 0; i<m; i++){
            cin>>d[i];
            ms.insert(d[i]);
        }
        bool flag = false;
        for(ll i = 0; i<n; i++){
            if(a[i]!=b[i]){
                if(ms.find(b[i])==ms.end()){
                    cout<<"NO"<<endl;
                    flag = true;
                    break;
                }
                else{
                    auto it = ms.find(b[i]);
                    ms.erase(it);
                }
            }
        }
        if(msb.find(d[m-1]) == msb.end() && !flag) cout<<"NO"<<endl;
        else if(!flag) cout<<"YES"<<endl;


    }
}