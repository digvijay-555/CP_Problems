#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll a1 = a[n-1];
        ll a2 = a[0];
        for(ll i =0; i<n-1; i++){
            a2 = max(a2, a[i]);
        }
        cout<<a1+a2<<endl;
    }
}