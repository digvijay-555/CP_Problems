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
        ll a[n+1];
        a[0]=0;
        for(ll i = 1; i<n+1; i++){
            cin>>a[i];

        }
        vector<ll> ans;
        for(ll i = 1; i<=n; i++){
            if(i==1 || i==n || a[i-1]<a[i]!=a[i+1]>a[i]){
                ans.push_back(a[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}