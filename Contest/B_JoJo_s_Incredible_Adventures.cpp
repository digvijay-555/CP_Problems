#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll n = s.size();
        
        // Check if there is at least one '1' in the string
        bool hasOne = false;
        for(char c : s) {
            if(c == '1') {
                hasOne = true;
                break;
            }
        }
        
        if(!hasOne) {
            cout << 0 << endl;
            continue;
        }

        // Check if the string consists entirely of '1's
        bool allOnes = true;
        for(char c : s) {
            if(c == '0') {
                allOnes = false;
                break;
            }
        }
        
        if(allOnes) {
            cout << n * n << endl;
            continue;
        }
        
        // Handle the circular nature by concatenating the string to itself
        s += s;
        ll max_cons = 0, current_cons = 0;

        // Calculate the longest segment of consecutive '1's in the doubled string
        for(ll i = 0; i < 2 * n; i++) {
            if(s[i] == '1') {
                current_cons++;
                max_cons = max(max_cons, current_cons);
            } else {
                current_cons = 0;
            }
        }

        // Calculate the maximum product of two consecutive segments of '1's
        ll mxc = 1;
        for(ll i = 1; i <= max_cons; i++) {
            mxc = max(mxc, i * (max_cons - i + 1));
        }
        cout << mxc << endl;
    }

    return 0;
}
