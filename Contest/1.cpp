#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        
        string s2;
        cin >> s2;
        
        sort(s2.begin(), s2.end());
        
        // Count occurrences of each position in a
        map<int, int> mp;
        for (int i = 0; i < m; i++) {
            mp[a[i]]++;
        }
        
        // Calculate extra characters in s2 to remove
        int extra = 0;
        for (auto it : mp) {
            extra += it.second - 1;
        }
        
        // Remove extra characters from s2
        s2 = s2.substr(0, m - extra);
        
        // Replace characters in s at specified positions
        int i = 0;
        for (auto it : mp) {
            int pos = it.first;
            s[pos - 1] = s2[i++];
        }
        
        // Output the modified string s
        cout << s << endl;
    }
    
    return 0;
}
