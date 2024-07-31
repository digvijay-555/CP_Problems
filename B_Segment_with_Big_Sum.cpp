#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--) {
        ll n, s;
        cin >> n >> s;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        ll i = 0, j = 0, curSum = 0, mnl = n + 1; // Initialize mnl to n + 1 to handle cases where no subarray is found
        while (j < n) {
            // Expand the window by adding a[j]
            curSum += a[j];
            j++;
            
            // Shrink the window from the left until the sum is less than s
            while (curSum >= s) {
                mnl = min(mnl, j - i);
                curSum -= a[i];
                i++;
            }
        }
        
        // If no valid subarray was found, mnl will still be n + 1
        if (mnl == n + 1) {
            cout << 0 << endl; // No subarray found
        } else {
            cout << mnl << endl; // Output the minimum length of the subarray
        }
    }
}
