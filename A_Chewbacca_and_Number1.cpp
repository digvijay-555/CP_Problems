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
        

        ll x = dgt.size();
        for(ll i = 0; i<x; i++){
            if(dgt[i]>4 &&dgt[i]<9) dgt[i]=9-dgt[i];
            if(dgt[i]==9 && i!=x-1) dgt[i]=0;
        }
        ll num = 0;
        for(ll i = 0; i<x; i++){
            num+=(dgt[i]*pow(10,i));
        }
        // for(auto it: dgt){
        //     cout<<it<<" ";
        // }
        cout<<num<<endl;
    }
}