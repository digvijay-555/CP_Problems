#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define all(v) v.begin(), v.end()
#define cin_input(a) int n; cin >> n; vector<int> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }
#define nl cout << "\n";
#define co(a) { cout << a << ' '; }
#define cou(a) { cout << a << "\n"; }
#define lcou(v) { for (auto& x : v) co(x); nl }
#define cy(x) { if (x) cou("YES") else cou("NO") }

const int M = 1e9 + 7;
const int MAX_N = 500001;

void solve() {
    cin_input(a)
    ll ok = 1;
    for (int i = 1; i < n; i++) {
        if ((a[i] - a[0]) & 1) {
            cou(-1)
            return;
        }
    }
    cou(39)
    for (int i = 0; i < 39; i++) {
        ll mn = *min_element(all(a));
        ll mx = *max_element(all(a));
        ll mid = mn + (mx - mn) / 2;
        co(mid)
        for (auto& aa : a) {
            aa = abs(aa - mid);
        }
    }
    nl
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--) {
        solve();
    }
    return 0;
}
