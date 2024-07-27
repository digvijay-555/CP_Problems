#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll sod(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << endl;
        } else {
            if (n % 10 != 9) {
                cout << n / 2 << " " << (n / 2) + 1 << endl;
            } else {
                // When the number ends with a 9, handle the case to balance the sum of digits
                string s = to_string(n);
                string s1 = "", s2 = "";
                int carry = 0;
                for (int i = s.length() - 1; i >= 0; --i) {
                    int digit = s[i] - '0';
                    int half1 = digit / 2;
                    int half2 = digit - half1;
                    
                    // Alternate addition of carry to balance the sums
                    if (carry == 0) {
                        s1 += (half1 + '0');
                        s2 += (half2 + '0');
                    } else {
                        s1 += (half2 + '0');
                        s2 += (half1 + '0');
                    }
                    
                    // Calculate the carry for next iteration
                    if (half1 != half2) carry = 1 - carry;
                }
                
                reverse(s1.begin(), s1.end());
                reverse(s2.begin(), s2.end());
                cout << stoll(s1) << " " << stoll(s2) << endl;
            }
        }
    }
    
    return 0;
}
