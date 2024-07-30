#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        ll a[n], b[m];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i<m; i++){
            cin>>b[i];
        }

        ll i = 0, j = 0;
        while(i!=n && j!=m){
            if(a[i]<b[j]){
                cout<<a[i]<<" ";
                i++;
            }
            else{
                cout<<b[j]<<" ";
                j++;
            }
        }
        if(i<n){
            for(ll z = i; z<n; z++){
                cout<<a[z]<<" ";
            }
        }
        if(j<m){
            for(ll z = j; z<m; z++){
                cout<<b[z]<<" ";
            }
        }
        cout<<endl;
    }
}