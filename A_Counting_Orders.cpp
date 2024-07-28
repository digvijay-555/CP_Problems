#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll mod = 1e9+7;

unsigned long long nCr(int n, int r) {
    // Optimization: nCr(n, r) is the same as nCr(n, n-r)
    if (r > n - r) 
        r = n - r;

    unsigned long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n], b[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }

        for(ll i = 0; i<n; i++){
            cin>>b[i];
        }

        sort(a, a+n);
        sort(b, b+n);

        bool flag = true;

        for(ll i = 0; i<n; i++){
            if(a[i]<=b[i]){
                cout<<0<<endl;
                flag = false;
                break;

            }
        }

        ll sm = 1;

        if(flag){
            ll m = 0;
            ll i = n-1;
            ll j = n-1;
            ll ct = 1;
            set<ll> st;
            st.insert(a[j]);
            for(ll i = n-1; i>=0; i--){
                while(j>=0 && a[j]>b[i]){
                    j--;
                }

                if(n-1-j-m<0) ct = 0;

                ll val = n-1-j-m;

                ct = (ct*(n-1-j-m))%mod;

                m++;
            }
            cout<<ct<<endl;
        }
        
        

    }
}