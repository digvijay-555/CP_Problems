#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll m[a][b];

        for (ll i = 0; i < a; i++) {
            for (ll j = 0; j < b; j++) {
                cin >> m[i][j];
            }
        }

        for (ll i = 0; i < a; i++) {
            for (ll j = 0; j < b; j++) {
                ll ch = 0;
                if (i + 1 < a) {
                    ch = max(ch, m[i + 1][j]);
                }
                if (i - 1 >= 0) {
                    ch = max(ch, m[i - 1][j]);
                }
                if (j + 1 < b) {
                    ch = max(ch, m[i][j + 1]);
                }
                if (j - 1 >= 0) {
                    ch = max(ch, m[i][j - 1]);
                }
                if (ch < m[i][j]) {
                    m[i][j] = ch;
                }
            }
        }

        for (ll i = 0; i < a; i++) {
            for (ll j = 0; j < b; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
