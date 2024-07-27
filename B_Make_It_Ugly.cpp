#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << -1 << endl;
            continue;
        }

        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; ++i) {
            pos[a[i]].push_back(i);
        }

        int min_removals = n;
        for (auto& p : pos) {
            vector<int>& indices = p.second;
            int local_removals = 0;
            for (int i = 1; i < indices.size(); ++i) {
                if (indices[i] - indices[i-1] > 1) {
                    local_removals++;
                }
            }
            local_removals += (indices.front() > 0) + (indices.back() < n - 1);
            min_removals = min(min_removals, local_removals);
        }

        cout << min_removals << endl;
    }

    return 0;
}
