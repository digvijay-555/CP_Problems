#include<bits/stdc++.h>
#define ll long long int
using namespace std;

unsigned long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    // Since C(n, r) == C(n, n-r)
    if (r > n - r) r = n - r;

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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll st = a[0]+a[1];
        ll sted = n;
        for(ll i=n-1; i>1; i--){
            if(a[i]>=st){
                sted=i;
            }
            else break;
        }
        ll edst=-1;
        ll ed = a[n-1];
        for(ll i = 0; i<n-2; i++){
            if(a[i]+a[i+1]<=ed){
                edst = i;
            }
            else break;
        }
        ll x1 = nCr(sted+1, 3);
        ll x2 = nCr(n-edst, 3);
        ll x3 = nCr(n-edst-(sted+1), 3);

        cout<<x1+x2-x3<<endl;


    }
}