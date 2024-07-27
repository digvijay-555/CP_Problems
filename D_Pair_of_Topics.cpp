#include <bits/stdc++.h>
using namespace std;

long long countPairsWithSumGreaterThanZero(vector<long long>& arr) {
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    long long count = 0;

    while (left < right) {
        if (arr[left] + arr[right] > 0) {
            count += (right - left);
            right--;
        } else {
            left++;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<long long> c(n);
    for (int i = 0; i < n; ++i) {
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());

    long long result = countPairsWithSumGreaterThanZero(c);
    cout << result << '\n';

    return 0;
}
