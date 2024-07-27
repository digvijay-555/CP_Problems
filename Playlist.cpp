#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll N, ll* songs)
{
    ll start = 0, ans = 0;
    // Map to store the last occurrence of all the
    // characters
    map<ll, ll> mp;

    // Increment end pointer character by character
    for (ll end = 0; end < N; end++) {
        // If the current song is not present in the map
        if (mp.find(songs[end]) == mp.end())
            mp.insert({ songs[end], end });
        else {
            // If the current song is present in the map and
            // is inside the window
            if (mp[songs[end]] >= start)
                start = mp[songs[end]] + 1;
            // Update the last occurrence of current
            // character to the current index
            mp[songs[end]] = end;
        }
        // Update ans to store the maximum length of range
        // of unique values
        ans = max(ans, end - start + 1);
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t = 1;
    //cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout<<solve(n, a)<<endl;
        
        // vector<ll> ch;
        // ll st = 0;
        // ll l = 0;
        // unordered_map<ll, ll> last_pos;
        
        // for (ll i = 0; i < n; i++) {
        //     if (last_pos.find(a[i]) != last_pos.end() && last_pos[a[i]] >= st) {
        //         ch.push_back(l);
        //         st = last_pos[a[i]] + 1;
        //         l = i - st;
        //     }
        //     last_pos[a[i]] = i;
        //     l++;
        // }
        // ch.push_back(l);
        
        // sort(ch.begin(), ch.end(), greater<int>());
        // cout<<ch[0]<<endl;
        
        // for (auto it : ch) {
        //     cout << it << " ";
        // }
        // cout << endl;
    }
}
