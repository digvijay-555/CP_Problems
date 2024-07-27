#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[1001][1001];

ll subset_sum(ll arr[], ll n, ll w) {
    // Initialize the table for base cases
    for (ll i = 0; i < n + 1; i++) {
        for (ll j = 0; j < w + 1; j++) {
            if (j == 0) {
                t[i][j] = 1;
            } else if (i == 0) {
                t[i][j] = 0;
            }
        }
    }

    // Fill the subset sum table
    for (ll i = 1; i < n + 1; i++) {
        for (ll j = 1; j < w + 1; j++) {
            if (arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j] + t[i - 1][j - arr[i - 1]];
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
        ll n, diff, sum =0;
        cin >> n >> diff;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            sum+=arr[i];
        }
        ll x = (diff+sum)/2;

        // Initialize the table with false values
        memset(t, 0, sizeof(t));

        cout<<subset_sum(arr, n, x)<<endl;
    }

    return 0;
}
