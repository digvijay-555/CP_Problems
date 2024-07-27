#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[102][1002];

ll knapsack(ll wt[], ll val[], ll w, ll n) {
    if (n == 0 || w == 0) return 0;
    if (t[n][w] != -1) return t[n][w];
    if (wt[n-1] <= w) {
        return t[n][w] = max(val[n-1] + knapsack(wt, val, w - wt[n-1], n-1), knapsack(wt, val, w, n-1));
    } else {
        return t[n][w] = knapsack(wt, val, w, n-1);
    }
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

        memset(t, -1, sizeof(t));
        
        cout << knapsack(wt, val, w, n) << endl;
    }

    return 0;
}
