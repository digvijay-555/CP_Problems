#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, m, k;
        cin>>n>>m>>k;
        ll a[n];
        for(ll i = n; i>=m+1; i--){
            cout<<i<<" ";
        }
        for(ll i = 1; i<=m; i++){
            cout<<i<<' ';
        }
       
        cout<<endl;
    }
}