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
        ll n;
        cin >> n;
        if (n < 4) {
            for (ll i = 0; i < n; i++) {
                cout << i + 1 << ' ';
            }
            cout << endl;
        } else {
            if (n % 2) {
                cout << n << " ";
                for (ll i = 1; i <= (n - 1) / 2; i++) {
                    cout << i << " " << n - i << ' ';
                }
                cout << endl;
            } else {
                for (ll i = 1; i <= n / 2; i++) {
                    cout << i << " " << n - i + 1 << " ";
                }
                cout << endl;
            }
        }
    }
    
    return 0;
}
