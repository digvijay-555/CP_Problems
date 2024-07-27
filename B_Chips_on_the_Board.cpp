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
        ll rw[n], cl[n];
        for(ll i = 0; i<n; i++){
            cin>>rw[i];
        }

        for(ll i = 0; i<n; i++){
            cin>>cl[i];
        }

        ll rws = 0, cls = 0;

        sort(rw, rw+n);
        sort(cl, cl+n);

        ll mxr=rw[0];
        ll mxc=cl[0];

        for(ll i=0; i<n; i++){
            rws+=(mxr + cl[i]);
        }

        for(ll i=0; i<n; i++){
            cls+=(mxc + rw[i]);
        }

        cout<<min(rws, cls)<<endl;
    }
}