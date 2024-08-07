#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool t[1001][1001];

bool subset_sum(ll arr[], ll n, ll w) {
    // Initialize the table for base cases
    for (ll i = 0; i < n + 1; i++) {
        for (ll j = 0; j < w + 1; j++) {
            if (j == 0) {
                t[i][j] = true;
            } else if (i == 0) {
                t[i][j] = false;
            }
        }
    }

    // Fill the subset sum table
    for (ll i = 1; i < n + 1; i++) {
        for (ll j = 1; j < w + 1; j++) {
            if (arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j] || t[i - 1][j - arr[i - 1]];
            } else {
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][w];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t_cases;
    cin >> t_cases;
    while (t_cases--) {
        ll n, sum;
        cin >> n >> sum;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Initialize the table with false values
        memset(t, 0, sizeof(t));

        if (subset_sum(arr, n, sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
