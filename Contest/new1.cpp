#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ct = 0; // Start count at 0
        ll remaining_n = n;

        while (k > 0) {
            // Try to distribute k evenly among remaining_n items
            k -= remaining_n;

            // Each round of distribution is counted
            ct++;

            // If k is still positive, distribute k again after removing one item
            if (k > 0) {
                k -= remaining_n;
                ct++;
            }

            // Decrement the number of items left for the next round
            remaining_n--;
        }
        if(k==0) cout<<0<<endl;
        cout << ct << endl;
    }
}
