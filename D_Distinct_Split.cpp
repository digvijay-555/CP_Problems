#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        // Initialize frequency counters
        vector<int> left_freq(26, 0), right_freq(26, 0);
        int left_distinct = 0, right_distinct = 0;

        // Count distinct characters in the whole string
        for (char c : s) {
            if (right_freq[c - 'a'] == 0) {
                right_distinct++;
            }
            right_freq[c - 'a']++;
        }

        ll max_sum = right_distinct;

        // Iterate over all possible splits
        for (ll i = 0; i < n - 1; i++) {
            char c = s[i];

            if (left_freq[c - 'a'] == 0) {
                left_distinct++;
            }
            left_freq[c - 'a']++;

            right_freq[c - 'a']--;
            if (right_freq[c - 'a'] == 0) {
                right_distinct--;
            }

            max_sum = max(max_sum, static_cast<ll>(left_distinct + right_distinct));
        }

        cout << max_sum << endl;
    }

    return 0;
}
