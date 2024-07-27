#include<bits/stdc++.h>
#define ll long long int
using namespace std;


long long nCr(int n, int r) {
    if (r > n) {
        return 0;
    }
    if (r > n - r) { // Because C(n, r) == C(n, n-r)
        r = n - r;
    }
    long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

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
        ll mxb = a[n-1]-a[0];
        ll mnm = a[0];
        ll mxm = a[n-1];
        ll ct1=0, ct2=0;
        for(ll i = 0; i<n; i++){
            if(mnm==a[i]) ct1++;
            else break;
        }

        for(ll i = 0; i<n; i++){
            if(mxm==a[n-1-i]) ct2++;
            else break;
        }
        if(mxm==mnm){
            cout<<0<<" "<<nCr(n, 2);
        }
        else cout<<mxb<<" "<<ct1*ct2<<endl;

    }
}