#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll sum = 0;
        for(ll i = 1; i<=(n-k); i++){
            sum-=(pow(2, i));
        }
        for(ll i = n-k+1; i<=n; i++){
            sum+=(pow(2, i));
        }
        cout<<sum<<endl;
    }
}