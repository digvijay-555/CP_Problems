#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[1001][1001];

string lcs(string s1, string s2, ll l1, ll l2) {
    // Base case initialization
    for (ll i = 0; i <= l1; i++) {
        t[i][0] = 0;
    }

    for (ll i = 0; i <= l2; i++) {
        t[0][i] = 0;
    }

    // Fill the DP table
    for (ll i = 1; i <= l1; i++) {
        for (ll j = 1; j <= l2; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                t[i][j] = 1 + t[i - 1][j - 1];
            } else {
                t[i][j] = max(t[i][j - 1], t[i - 1][j]);
            }
        }
    }

    // Reconstruct the LCS string from the DP table
    ll i = l1, j = l2;
    string s = "";
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            s += s1[i - 1];
            i--;
            j--;
        } else {
            if (t[i][j - 1] > t[i - 1][j]) {
                j--;
            } else {
                i--;
            }
        }
    }

    reverse(s.begin(), s.end()); // The string is built in reverse order

    return s;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t_cases = 1;
    cin >> t_cases;
    while (t_cases--) {
        string s1, s2;
        cin >> s1 >> s2;

        // Initialize the DP table
        memset(t, 0, sizeof(t));

        cout << lcs(s1, s2, s1.length(), s2.length()) << endl;
    }
    return 0;
}
