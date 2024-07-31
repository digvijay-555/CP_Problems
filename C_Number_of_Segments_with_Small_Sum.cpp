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
        
        ll i = 0, j = 0, curSum = 0, count = 0;
        
        while (j < n) {
            curSum += a[j];
            
            while (curSum > s && i <= j) {
                curSum -= a[i];
                i++;
            }
            
            // All subarrays ending at j with sum <= s
            count += (j - i + 1);
            j++;
        }
        
        cout << count << endl;
    }
    return 0;
}
