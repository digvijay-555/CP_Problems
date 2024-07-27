#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        ll sm = 0;
        ll ct = 0;
        
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(ll i = 0; i<n; i++){
            if(a[i]<0 && ct<k) {
                sm+=(-1*(a[i]));
                ct++;
            }
        }
        
        cout<<sm<<endl;
        
    }
}