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
        ll x = k/(n-1);
        ll y = x*n;
        ll rm = k%(n-1);
        if(rm==0) cout<<y-1<<endl;
        else cout<<y+rm<<endl;
    }
}