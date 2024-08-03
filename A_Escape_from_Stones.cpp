#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;
    ll n = s.size();
    deque<ll> left, right;
    
    for (ll i = 0; i < n; i++) {
        if (s[i] == 'l') {
            left.push_front(i + 1); // Push to the front of left list
        } else {
            right.push_back(i + 1); // Push to the back of right list
        }
    }
    
    // Output the right list first, then the left list
    for (ll x : right) {
        cout << x << endl;
    }
    for (ll x : left) {
        cout << x << endl;
    }
    
    return 0;
}
