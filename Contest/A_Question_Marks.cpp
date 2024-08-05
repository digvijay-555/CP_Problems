#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        // Initialize counts for each character
        ll a = 0, b = 0, c = 0, d = 0;

        // Count occurrences of each character
        for (ll i = 0; i < 4*n; i++) {
            if (s[i] == 'A') a++;
            if (s[i] == 'B') b++;
            if (s[i] == 'C') c++;
            if (s[i] == 'D') d++;
        }

        cout<<min(a,n)+min(b,n)+min(c,n)+min(d,n)<<endl;
    }

    return 0;
}
