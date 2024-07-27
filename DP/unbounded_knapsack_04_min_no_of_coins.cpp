#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[1001][1001];

ll subset_sum(ll arr[], ll n, ll w) {
    // Initialize the table for base cases
    for(ll i = 0; i<w+1; i++){
        t[0][i]=INT_MAX-1;
    }
    for(ll i = 0; i<n+1; i++){
        t[i][0]=0;
    }

    for(ll i = 1; i<w+1; i++){
        if(i%arr[0]==0){
            t[1][i] = i/arr[0];
        }
        else t[1][i]=INT_MAX-1;
    }
    // Fill the subset sum table
    for (ll i = 2; i < n + 1; i++) {
        for (ll j = 1; j < w + 1; j++) {
            if (arr[i - 1] <= j) {
                t[i][j] = min(t[i - 1][j] , 1+t[i][j - arr[i - 1]]);
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

        cout<<subset_sum(arr, n, sum)<<endl;
    }

    return 0;
}
