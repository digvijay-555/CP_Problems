#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> heights(n);
        for (ll i = 0; i < n; i++) {
            cin >> heights[i];
        }
        
        sort(heights.begin(), heights.end());
        
        // Find the pair with the minimum difference
        ll min_diff = LLONG_MAX;
        ll min_index = 0;
        for (ll i = 0; i < n - 1; i++) {
            if (heights[i + 1] - heights[i] < min_diff) {
                min_diff = heights[i + 1] - heights[i];
                min_index = i;
            }
        }
        
        vector<ll> result;
        result.push_back(heights[min_index]);
        
        // Add elements to the right of the minimum pair in increasing order
        for (ll i = min_index + 2; i < n; i++) {
            result.push_back(heights[i]);
        }
        
        // Add elements to the left of the minimum pair in decreasing order
        for (ll i = 0; i < min_index; i++) {
            result.push_back(heights[i]);
        }
        
        result.push_back(heights[min_index + 1]);
        
        for (ll i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
