#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll i = 0, j = n - 1;
        ll tt = 0;
        ll sumLeft = 0, sumRight = 0;
        while (i <= j) {
            if (sumLeft < sumRight) {
                sumLeft += a[i];
                i++;
            } 
            else if (sumLeft == sumRight) {
                tt = i + (n - j - 1);
                sumLeft+=a[i];
                sumRight+=a[j];
                i++;
                j--;
            }
            else {
                sumRight += a[j];
                j--;
            }
            
        }
        cout << tt << endl;
    }
    return 0;
}
