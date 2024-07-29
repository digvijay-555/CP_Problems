#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    //cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll n = s.length();
        ll st = 0, nd = 1;

        for (ll i = 0; i < n; i++) {
            ll lw = i - 1;
            ll hg = i;

            while (lw >= 0 && hg < n && s[lw] == s[hg]) {
                if (hg - lw + 1 > nd) {
                    st = lw;
                    nd = hg - lw + 1;
                }
                lw--;
                hg++;
            }

            lw = i - 1;
            hg = i + 1;

            while (lw >= 0 && hg < n && s[lw] == s[hg]) {
                if (hg - lw + 1 > nd) {
                    st = lw;
                    nd = hg - lw + 1;
                }
                lw--;
                hg++;
            }
        }

        for (ll i = st; i < st + nd; i++) {
            cout << s[i];
        }
        cout<<endl;
    }
    return 0;
}
