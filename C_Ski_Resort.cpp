#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ct = 0;
        ll valid_start = -1;

        for (ll i = 0; i < n; i++) {
            if (a[i] <= q) {
                if (valid_start == -1) {
                    valid_start = i;
                }
                if (i - valid_start + 1 >= k) {
                    ct += (i - valid_start + 1 - k + 1);
                }
            } else {
                valid_start = -1;
            }
        }

        cout << ct << endl;
    }

    return 0;
}
