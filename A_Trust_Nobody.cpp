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
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);
        ll lr = 0;
        for(ll i = 0; i<n; i++){
            if(a[i]>=n-i){
                lr++;
            }
            
        }
        if(a[n-1]==n && lr==n && lr!=0) cout<<-1<<endl;
        else if(lr==a[n-lr] && lr!=0) cout<<-1<<endl;
        else cout<<lr<<endl;
    }
}