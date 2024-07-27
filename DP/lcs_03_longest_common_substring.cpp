#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[1001][1001];

ll lcs(string s1, string s2, ll l1, ll l2) {
    // Base case initializ+ation
    for(ll i = 0; i <= l1; i++){
        t[i][0] = 0;
    }

    for(ll i = 0; i <= l2; i++){
        t[0][i] = 0;
    }

    ll mx = 0;
    for(ll i = 1; i <= l1; i++){
        for(ll j = 1; j <= l2; j++){
            // If characters match
            if (s1[i - 1] == s2[j - 1]) {
                t[i][j] = 1 + t[i-1][j-1];
                mx = max(mx, t[i][j]);
            } else {
                // If characters don't match
                t[i][j] = 0;
            }
        }
    }

    return mx;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t_cases = 1;
    cin >> t_cases;
    while (t_cases--) {
        string s1, s2;
        cin >> s1 >> s2;
        
        // Call the LCS function
        cout << lcs(s1, s2, s1.length(), s2.length()) << endl;
    }
    return 0;
}
