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
        vector<ll> dgt;
        while(n>0){
            dgt.push_back(n%10);
            n/=10;
        }
        for(auto it: dgt){
            cout<<it<<" ";
        }
    }
}