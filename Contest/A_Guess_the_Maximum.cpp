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
        vector<ll> a(n);
        for(ll i =0; i<n; i++){
            cin>>a[i];
        }
        vector<ll>mx;
        for(ll i=1;i<n;i++){
            mx.push_back(max(a[i],a[i-1]));
        }
        sort(mx.begin(), mx.end());
        cout<<mx[0]-1<<endl;
    }
}