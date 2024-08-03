#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> L(n);
    for (ll i = 0; i < n; i++) {
        cin >> L[i];
    }
    
    ll survivors = 0;
    ll kill_position = n; // Position to track the farthest kill from the right
    
    for (ll i = n - 1; i >= 0; i--) {
        // If this person is not killed by someone from the right
        if (i < kill_position) {
            survivors++;
        }
        // Update the kill position
        kill_position = min(kill_position, i - L[i]);
    }
    
    cout << survivors << endl;
    
    return 0;
}
