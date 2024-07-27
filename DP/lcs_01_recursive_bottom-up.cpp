#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[1001][1001];

ll lcs(string s1, string s2, ll l1, ll l2) {
    // Base case
    if (l1 == 0 || l2 == 0) {
        return 0;
    }

    // Check if the value is already computed
    if (t[l1][l2] != -1) {
        return t[l1][l2];
    }

    // If characters match
    if (s1[l1 - 1] == s2[l2 - 1]) {
        t[l1][l2] = 1 + lcs(s1, s2, l1 - 1, l2 - 1);
    } else {
        // If characters don't match
        t[l1][l2] = max(lcs(s1, s2, l1, l2 - 1), lcs(s1, s2, l1 - 1, l2));
    }

    return t[l1][l2];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t_cases = 1;
    cin >> t_cases;
    while (t_cases--) {
        string s1, s2;
        cin >> s1 >> s2;
        
        // Initialize the memoization table with -1
        memset(t, -1, sizeof(t));
        
        cout << lcs(s1, s2, s1.length(), s2.length()) << endl;
    }
    return 0;
}
