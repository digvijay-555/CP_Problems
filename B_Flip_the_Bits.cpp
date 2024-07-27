#include<bits/stdc++.h>
using namespace std;

bool canTransform(const string& a, const string& b, int n) {
    vector<int> prefixSum(n + 1, 0);
    
    // Compute the prefix sum to check the balance
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + (a[i] == '1' ? 1 : -1);
    }
    
    bool flipped = false;
    
    for (int i = n - 1; i >= 0; --i) {
        // If the current bit does not match and we need to flip
        if ((a[i] == b[i]) == flipped) {
            if (prefixSum[i + 1] == 0) {
                flipped = !flipped; // flip the entire prefix
            } else {
                return false; // cannot flip, hence transformation not possible
            }
        }
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string a, b;
        cin >> a >> b;
        
        if (canTransform(a, b, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
