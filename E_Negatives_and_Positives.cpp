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
        ll sum = 0;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll ans = sum;
        for(ll i = 1; i<n; i++){
            ans = max(ans, sum-(2*(a[i]+a[i-1])));
        }
        cout<<ans<<endl;
    }
}