#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t=1;
    cin >> t;

    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        string r;
        cin >> r;

        vector<bool> v(n + 2, false);
        vector<pair<ll, ll>> vp; 

        vp.push_back({0, 0});
        v[0] = true;

        bool c = false;
        ll idx = 0; 

        while (!c && idx < vp.size()) {
            ll p = vp[idx].first;
            ll s = vp[idx].second;
            ++idx;

      
            if (p == 0 || r[p - 1] == 'L') {
                for (ll j = 1; j <= m; ++j) {
                    ll np = p + j;
                    if (np == n + 1) {
                        c = true;
                        break;
                    }
                    if (np <= n && r[np - 1] != 'C' && !v[np]) {
                        v[np] = true;
                        vp.push_back({np, s});
                    }
                }
            }


            if (p > 0 && p <= n && r[p - 1] == 'W' && s < k) {
                ll np = p + 1;
                if (np == n + 1) {
                    c = true;
                    break;
                }
                if (np <= n && r[np - 1] != 'C' && !v[np]) {
                    v[np] = true;
                    vp.push_back({np, s + 1});
                }
            }
        }

       if (c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
