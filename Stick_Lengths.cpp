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
        vector<ll> a(n);
        ll sum = 0;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(), a.end());
        ll c;
        if(n%2==1){
            c = a[n/2];
        }
        else{
            c = a[n/2];
        }
        ll sm = 0;
        for(ll i = 0; i<n; i++){
            sm+=(max(a[i], c) - min(a[i], c));
        }
        cout<<sm<<endl;
    }
}