#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum < s) {
        cout << -1 << endl;
        return;
    }

    int cnt = sum - s;
    vector<int> cost1;
    cost1.push_back(0);

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cost1.push_back(i + 1);
        }
    }

    vector<int> cost2;
    cost2.push_back(0);
    for (int j = n - 1; j >= 0; j--) {
        if (arr[j] == 1) {
            cost2.push_back(n - j);
        }
    }

    int ans = INT_MAX;
    for (int i = 0; i <= cnt; i++) {
        int cost = cost1[i] + cost2[cnt - i];
        ans = min(ans, cost);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
