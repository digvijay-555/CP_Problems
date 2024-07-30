#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    //cin>>t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }

        ll i = 0, j = 0, ct = 0;
        
        // Sort both arrays
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        while (i < n && j < m) {
            if (a[i] == b[j]) {
                ll ai = a[i];
                ll bi = b[j];
                
                ll countA = 0;
                while (i < n && a[i] == ai) {
                    countA++;
                    i++;
                }
                
                ll countB = 0;
                while (j < m && b[j] == bi) {
                    countB++;
                    j++;
                }
                
                ct += countA * countB;
            } else if (a[i] < b[j]) {
                i++;
            } else {
                j++;
            }
        }

        cout << ct << endl;
    }

    return 0;
}
