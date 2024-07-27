#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[(a[i]%m)]++;
        }
        ll x = 0;
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            ll y = (m-(b[i]%m))%m;
            if(mp.find(y)!=mp.end()){
                x+=mp[y];
            }
        }
        cout<<x<<endl;
    }

    return 0;
}
