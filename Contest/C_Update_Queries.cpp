#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        string s1, s2;
        cin>>s1;
        ll a[m];
        for(ll i =0; i<m; i++){
            cin>>a[i];
        }
        cin>>s2;
        sort(a, a+m);
        sort(s2.begin(), s2.end());
        map<ll, ll> mp;
        for(ll i = 0; i<m; i++){
            mp[a[i]]++;
        }

        ll x = 0;
        for(auto it: mp){
            x+=(it.second-1);
        }

        s2 = s2.substr(0, m-x);

        ll q = 0;
        for(auto it: mp){
            s1[it.first-1] = s2[q];
            q++;
        }
        cout<<s1<<endl;
        

    }
}