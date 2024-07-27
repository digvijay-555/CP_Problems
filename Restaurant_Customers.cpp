#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll, ll>> cst(n);
        for(ll i = 0; i<n; i++){
            cin>>cst[i].first>>cst[i].second;
        }
        vector<pair<ll, ll>> nst(2*n);
        ll j=0;
        for(ll i = 0; i<n; i++){
            nst[j].first = cst[i].first;
            nst[j].second = 1;
            j++;
            nst[j].first = cst[i].second;
            nst[j].second = 0;
            j++;
        }
        sort(nst.begin(), nst.end());
        ll ct[2*n];
        ll cc = 0;
        ll  i = 0;
        for(auto &it: nst){
            if(it.second == 1) cc++;
            else cc--;
            ct[i] = cc;
            i++;
        }
        sort(ct, ct+(2*n));
        cout<<ct[(2*n)-1]<<endl;
    }
}