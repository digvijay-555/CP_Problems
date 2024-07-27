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
        vector<ll> v(n);
        for(ll i = 0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
       
        map<ll, ll> mp;

        for(auto it: v){
            mp[it]++;
        }

        if(mp[v[n-1]]%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            ll ch = 0;
            for(auto it: mp){
                if(it.second%2!=0){
                    ch = 1;
                    break;
                }
            }

            if(ch==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


    }
}