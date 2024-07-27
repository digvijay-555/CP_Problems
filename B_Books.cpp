#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll i = 0, j = 0, sum = 0, max_books = 0, current_books = 0;

        while (j < n) {
            sum += a[j];
            current_books++;

            while (sum > k) {
                sum -= a[i];
                i++;
                current_books--;
            }

            max_books = max(max_books, current_books);
            j++;
        }

        cout << max_books << endl;
    }
    return 0;
}
