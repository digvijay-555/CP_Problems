#include <bits/stdc++.h>
#define ll long long int
using namespace std;
  
ll t[102][1002];

ll knapsack(ll wt[], ll val[], ll w, ll n) {
    for (ll i = 0; i < n + 1; i++) {
        for (ll j = 0; j < w + 1; j++) {
            if (i == 0 || j == 0) {
                t[i][j] = 0;
            } else if (wt[i - 1] <= j) {
                t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
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
        ll n, w;
        cin >> n >> w;
        ll wt[n], val[n];
        for (ll i = 0; i < n; i++) {
            cin >> wt[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> val[i];
        }

        // Initialize the memoization table with 0 since we will fill it directly in the knapsack function
        cout << knapsack(wt, val, w, n) << endl;
    }

    return 0;
}
