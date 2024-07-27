#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        
        int max_len = 1, current_len = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i-1] <= k) {
                current_len++;
            } else {
                max_len = max(max_len, current_len);
                current_len = 1;
            }
        }
        max_len = max(max_len, current_len);

        cout << n - max_len << endl;
    }

    return 0;
}
