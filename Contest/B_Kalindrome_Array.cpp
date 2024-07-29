#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll x, ll a[], ll n) {
    ll i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] == a[j]) {
            i++;
            j--;
        } else if (a[i] == x) {
            i++;
        } else if (a[j] == x) {
            j--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll i = 0, j = n - 1;
        bool x = true;
        bool y = true;

        while (i <= j) {
            if (a[i] != a[j]) {
                x = check(a[i], a, n);
                y = check(a[j], a, n);
                break;
            }
            i++;
            j--;
        }

        if (x || y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
