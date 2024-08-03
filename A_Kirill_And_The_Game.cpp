#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double l,r,x,y,k;
    cin >> l >> r >> x >> y >> k;
    
    string res = "NO";
    for(int i = x; i <= y; i++) {
        if(i*k >= l && i*k <= r){
            res = "YES";
            break;
        }
    }
    
    cout << res << endl;

    return 0;
}