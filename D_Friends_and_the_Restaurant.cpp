#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n), c(n);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        ll sm = 0;
        for (ll i = 0; i < n; i++) {
            c[i] = b[i] - a[i];
            sm += c[i];
        }
        sort(c.begin(), c.end());

        ll p = 0;
        if(sm<0){
            
            while(sm<0){
                sm-=c[p];
                p++;
            }
        }

        sort(c.begin(), c.end());

        ll i = p, j = n - 1;
        ll ct = 0;

        while (i < j) {
            if (c[i] + c[j] >= 0) {
                ct++;
                i++;
                j--;
            } else {
                i++;
            }
        }

        cout << ct << endl;
    }
    return 0;
}
