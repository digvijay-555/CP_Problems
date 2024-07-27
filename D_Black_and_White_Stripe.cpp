#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll w_count = 0;
        for (ll a = 0; a < k; a++) {
            if (s[a] == 'W') w_count++;
        }
        
        ll min_w_count = w_count;
        
        for (ll i = 1; i <= n - k; i++) {
            if (s[i - 1] == 'W') w_count--;
            if (s[i + k - 1] == 'W') w_count++;
            min_w_count = min(min_w_count, w_count);
        }

        cout << min_w_count << endl;
    }

    return 0;
}
