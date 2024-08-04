#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Calculate prefix sums from both ends
        vector<ll> prefix_from_start(n), prefix_from_end(n);
        prefix_from_start[0] = a[0];
        prefix_from_end[n-1] = a[n-1];

        for (ll i = 1; i < n; i++) {
            prefix_from_start[i] = prefix_from_start[i-1] + a[i];
        }
        for (ll i = n-2; i >= 0; i--) {
            prefix_from_end[i] = prefix_from_end[i+1] + a[i];
        }

        // Two-pointer approach to find the maximum equal sum
        ll i = 0, j = n-1, last_sum = 0;
        while (i < j) {
            if (prefix_from_start[i] == prefix_from_end[j]) {
                last_sum = prefix_from_start[i];
                i++;
                j--;
            } else if (prefix_from_start[i] < prefix_from_end[j]) {
            
                i++;
            } else {
                j--;
            }
        }

        cout << last_sum << endl;
    }
}
