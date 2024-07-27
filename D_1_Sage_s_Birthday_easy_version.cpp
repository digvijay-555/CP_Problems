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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll b[n];
        for(ll i = 0; i<n/2; i++){
            b[(i*2)+1]=a[i];
        }
        for(ll i = n/2; i<n; i++){
            b[(i-(n/2))*2]=a[i];
        }
        cout<<(n-1)/2<<endl;
        for(ll i = 0; i<n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}