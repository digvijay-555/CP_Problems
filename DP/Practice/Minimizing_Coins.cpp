#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll min_coins(ll arr[], ll n, ll w) {
    // Create a DP array and initialize it to a large value
    vector<ll> dp(w + 1, INT_MAX - 1);
    dp[0] = 0; // Base case

    // Fill the DP array
    for (ll i = 0; i < n; i++) {
        for (ll j = arr[i]; j <= w; j++) {
            dp[j] = min(dp[j], 1 + dp[j - arr[i]]);
        }
    }

    // If dp[w] is still INT_MAX-1, it means we couldn't find a solution
    return (dp[w] == INT_MAX - 1) ? -1 : dp[w];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll T = 1;
    //cin >> T;
    while (T--) {
        ll n, w;
        cin >> n >> w;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << min_coins(arr, n, w) << endl;
    }
    return 0;
}
