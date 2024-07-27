#include <bits/stdc++.h>
using namespace std;

// Define macros for convenience
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Size of the array
        vi a(n, 0);
        read(a);  // Read the array elements

        // Sort the array
        sort(a.begin(), a.end());
        
        // Get the maximum value in the array
        int val = a.back();
        
        // Count the frequency of each element
        map<int, int> m;
        for (auto it : a) {
            m[it]++;
        }
        
        // If the frequency of the maximum value is odd, Alice wins
        if (m[val] % 2 == 1) {
            cout << "YES" << endl;
        } else {
            // Check if there's any element with an odd frequency
            bool foundOddFrequency = false;
            for (auto it : m) {
                if (it.second % 2 == 1) {
                    foundOddFrequency = true;
                    break;
                }
            }
            
            if (foundOddFrequency) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
