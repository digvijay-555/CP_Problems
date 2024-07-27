#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, x, y;
        cin>>n>>x>>y;



        vector<ll> a(n+1);
        a[y-1]=-1;
        a[0]=0;
        ll p = -1;
        for(ll i= y-1 ; i>0; i--){
            a[i]=p;
            p*=-1;
        }
        for(ll i = y; i<=x; i++){
            a[i]=1;
        }
        ll q = -1;
        for(ll i = x+1; i<=n; i++){
            a[i]=q;
            q*=-1;
        }

        for(ll i = 1; i<=n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}