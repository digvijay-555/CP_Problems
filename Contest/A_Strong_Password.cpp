#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        string p;
        cin >> p;
        
        auto ct = [](const string &s) {
            int t = 2;
            for (size_t i = 1; i < s.size(); ++i) {
                if (s[i] == s[i - 1]) {
                    t += 1;
                } else {
                    t += 2;
                }
            }
            return t;
        };
        
        string bp;
        int mt = -1;
        
        for (size_t i = 0; i <= p.size(); ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string np = p.substr(0, i) + c + p.substr(i);
                int nt = ct(np);
                
                if (nt > mt) {
                    mt = nt;
                    bp = np;
                }
            }
        }
        
        cout << bp << endl;
    }
    
    return 0;
}
