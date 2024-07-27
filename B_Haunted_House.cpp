#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long


using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> helper;
    for(int i = 0; i < n; ++i){
        if(s[i] == '0'){
            helper.push_back(i);
        }
    }
    int last = 0;
 
    
    for(int i = n-1; i>=0; --i){
        
        if(helper.size() == 0){
            cout << -1 << " ";
            continue;
        }

        cout << last + i - helper.back() << " ";
        last += i - helper.back();
        helper.pop_back();
       
    }
    cout << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){solve();}
    return 0;
}