#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, l, r;
        cin>>n>>l>>r;
        vector<ll> a(n);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        
        // Sort the array
        sort(a.begin(), a.end());
        
        ll ct = 0;
        
        // Use two pointers to find valid pairs
        for(ll i = 0; i < n-1; i++){
            ll lo = i + 1, hi = n - 1;
            
            // Find the range [lo, hi] where l <= a[i] + a[lo] <= r
            while (lo <= hi) {
                ll mid = lo + (hi - lo) / 2;
                if (a[i] + a[mid] < l) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            ll left = lo;
            
            lo = i + 1;
            hi = n - 1;
            while (lo <= hi) {
                ll mid = lo + (hi - lo) / 2;
                if (a[i] + a[mid] > r) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            ll right = hi;
            
            // If valid range exists, count the pairs
            if (left <= right) {
                ct += (right - left + 1);
            }
        }
        cout << ct << endl;
    }
}
