#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        ll b[n][m];

        for (ll i = 0; i < n; i++) {
            string s1;
            cin >> s1;
            for (ll j = 0; j < m; j++) {
                if (s1[j] == '0') a[i][j] = 0;
                if (s1[j] == '1') a[i][j] = 1;
                if (s1[j] == '2') a[i][j] = 2;
            }
        }

        for (ll i = 0; i < n; i++) {
            string s2;
            cin >> s2;
            for (ll j = 0; j < m; j++) {
                if (s2[j] == '0') b[i][j] = 0;
                if (s2[j] == '1') b[i][j] = 1;
                if (s2[j] == '2') b[i][j] = 2;
            }
        }

        
        bool f = true;

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                if (a[i][j] == b[i][j]) continue;

                ll v = a[i][j];
                if (i + 1 < n && j + 1 < m){}
                else {
                    f = false;
                    break;
                }
                if ((v + 1) % 3 == b[i][j]) {
                     a[i][j] = b[i][j];
                    a[i + 1][j + 1] = (a[i + 1][j + 1] + 1) % 3;
                    a[i][j + 1] = (a[i][j + 1] + 2) % 3;
                    a[i + 1][j] = (a[i + 1][j] + 2) % 3;
                   
                } 
                else if ((v + 2) % 3 == b[i][j]) {
                    a[i][j] = b[i][j];
                    a[i + 1][j + 1] = (a[i + 1][j + 1] + 2) % 3;
                    a[i + 1][j] = (a[i + 1][j] + 1) % 3;
                    a[i][j + 1] = (a[i][j + 1] + 1) % 3;
                    
                    
                } 
                else f = false;
            }
            if (f == false) {
                break;
            }
        }
        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
