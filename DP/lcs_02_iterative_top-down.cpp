#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll t[1001][1001];

ll lcs(string s1, string s2, ll l1, ll l2) {
    // Base case
    for(ll i = 0; i<l1+1; i++){
        t[i][0]=0;
    }

    for(ll i = 0; i<l2+1; i++){
        t[0][i]=0;
    }


    for(ll i = 1; i<l1+1; i++){
        for(ll j = 1; j<l2+1; j++){
            // If characters match


            if (s1[i - 1] == s2[j - 1]) {
                t[i][j] = 1 + t[i-1][j-1];
            } else {
                // If characters don't match
                t[i][j] = max(t[i][j-1], t[i-1][j]);
            }
        }
    }
    // // Check if the value is already computed
    // if (t[l1][l2] != -1) {
    //     return t[l1][l2];
    // }

    

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
