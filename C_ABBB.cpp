#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        s+='m';
        ll i = 0;
        while (i < s.length() - 1) {
            if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'B' && s[i + 1] == 'B')) {
                s.erase(i, 2);  // Remove the pair
                if (i > 0) i--; // Move back one position to recheck
            } else {
                i++;
            }
        }
        
        cout << s.length()-1 << endl;
    }
    return 0;
}
