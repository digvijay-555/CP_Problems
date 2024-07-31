#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        float l, r, x, y, k;
        cin>>l>>r>>x>>y>>k;

        ll p = ceil(l/y);
        ll q = floor(r/x);

        if(p<=k && q>=k){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}