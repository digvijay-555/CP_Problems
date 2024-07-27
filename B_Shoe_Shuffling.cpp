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
        ll a[n];
        map<ll, ll> mp;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        sort(a, a+n);
        bool flag = false;
        for(auto [x,y] : mp){
            if(y<2){
                cout<<-1<<endl;
                flag=true;
                break;
            }
        }

        if(flag){
            continue;
        }

        int d=0;
        for(auto it:mp){
            cout<<d+it.second<<" ";
            for(int i=0;i<it.second-1;i++){
                cout<<d+i+1<<" ";
            }
            d+=it.second;
        }
        cout<<endl;

        
    }
}