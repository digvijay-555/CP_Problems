#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll b[n-1];
        for (ll i = 0; i < n-1; i++) {
            cin >> b[i];
        }
        vector<ll> a(n);
        a[0] = b[0];
        for (ll i = 1; i < n-1; i++) {
            a[i] = b[i] | b[i-1];
        }
        a[n-1] = b[n-2];

        bool flag = true;
        for (ll i = 0; i < n-1; i++) {
            if ((a[i] & a[i+1]) != b[i]) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << -1 << endl;
            continue;
        }
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
