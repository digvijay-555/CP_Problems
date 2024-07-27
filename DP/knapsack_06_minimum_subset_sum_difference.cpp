#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool t[1001][1001];

void subset_sum(ll arr[], ll n, ll w) {
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
}

ll mnm_diff(ll smc, ll n) {
    ll j = 0;
    ll x = 0;
    while (j <= smc / 2) {
        if (t[n][j] == true) {
            x = j;
        }
        j++;
    }
    x = (smc - x) - x;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t_cases;
    cin >> t_cases;
    while (t_cases--) {
        ll n;
        cin >> n;
        ll arr[n];
        ll ch = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            ch += arr[i];
        }

        // Initialize the table with false values
        memset(t, 0, sizeof(t));

        subset_sum(arr, n, ch);
        cout << mnm_diff(ch, n) << endl;
    }

    return 0;
}
