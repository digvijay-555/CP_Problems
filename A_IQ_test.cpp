#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
   // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            a[i]=a[i]%2;
        }
        ll x = 0;
        for(ll i = 1 ; i<n; i++){
            if(a[i]!=a[i-1]) {
                x = i+1;
                break;
            }
        }
        if(x==2){
            if(a[0]==a[2]) x=2;
            else x=1;
        }
        cout<<x<<endl;
    }
}