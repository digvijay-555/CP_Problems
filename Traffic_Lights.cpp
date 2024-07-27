#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t = 1;
    //cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        for(ll i = 0; i < m; i++) {
            cin >> a[i];
        }
        
        set<ll> ms;  // to store traffic light positions
        multiset<ll> mss; // to store distance between two consecutive lights
        
        ms.insert(0);
        ms.insert(n);
        mss.insert(n);
        
        for(ll i = 0; i < m; i++) {
            ll pos = a[i];
            auto it = ms.insert(pos).first;
            
            auto next = std::next(it);
            auto prev = std::prev(it);
            
            mss.erase(mss.find(*next - *prev));
            mss.insert(*next - pos);
            mss.insert(pos - *prev);
            
            cout << *mss.rbegin() << " ";
        }
        cout << "\n";
    }
    return 0;
}
