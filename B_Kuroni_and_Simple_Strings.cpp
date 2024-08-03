#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t = 1;
    while(t--) {
        string s;
        cin >> s;
        ll n = s.size();
        
        vector<ll> left;
        vector<ll> right;
        ll i = 0, j = n - 1;
        
        while (i < j) {
            while (i < n && s[i] != '(') i++;  // Find the next '(' from the left
            while (j >= 0 && s[j] != ')') j--; // Find the next ')' from the right
            if (i < j) {
                left.push_back(i + 1);  // Store 1-based index for '('
                right.push_back(j + 1); // Store 1-based index for ')'
                i++;
                j--;
            }
        }

        if (left.empty()) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
            cout << left.size() + right.size() << endl;
            for (ll idx : left) {
                cout << idx << " ";
            }
            for (auto it = right.rbegin(); it != right.rend(); ++it) {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
