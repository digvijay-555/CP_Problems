#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if(x==1){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    else if(x==2){
        long long ct = 0;
        for(long long i = 0; i<n; i++){
            if(a[i]==1) ct++;
        }
        if(ct<2){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
    }
    
    unordered_map<long long, long long> index_map;
    for (long long i = 0; i < n; ++i) {
        long long complement = x - a[i];
        if (index_map.find(complement) != index_map.end()) {
            cout << index_map[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        index_map[a[i]] = i;
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
