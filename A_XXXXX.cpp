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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        
        ll mxl = 1;
        ll b[n];
        ll sm = 0;
        for(ll i = 0; i<n; i++){
            b[i]=a[i]%k;
            sm+=b[i];
        }
        sm%=k;
        if(sm%k!=0){
            cout<<n<<endl;
            continue;
        }
        ll i = 0;
        while(b[i]==0 && i<n){
            i++;
        }
        if(i==n){
            cout<<-1<<endl;
            continue;
        }
        ll j = n-1;
        while(b[j]==0) j--;

        cout<<max(n-i-1, j)<<endl;

    }
}