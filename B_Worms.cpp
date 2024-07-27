#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t = 1;
    // cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll m;
        cin >> m;
        vector<ll> b(m);
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }

        vector<pair<ll, ll>> sm(n);
        sm[0].first = a[0];
        sm[0].second = 1;
        for (ll i = 1; i < n; i++) {
            sm[i].first = sm[i - 1].first + a[i];
            sm[i].second = i + 1;
        }

        for (ll i = 0; i < m; i++) {
            auto it = lower_bound(sm.begin(), sm.end(), make_pair(b[i], 0LL), [](const pair<ll, ll>& p1, const pair<ll, ll>& p2) {
                return p1.first < p2.first;
            });
            if (it != sm.end()) {
                cout << it->second << endl;
            }
        }
    }
    return 0;
}
