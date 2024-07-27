#include<bits/stdc++.h>
#define endl "\n"
#define int long long

using namespace std;

void solve(){
	int n, x; cin >> n >> x;
	vector<pair<int, int> > a;
	int ans = 0;
	for(int i = 0; i < n; ++i){
		int k; cin >> k;
		a.push_back({k, 1});
		ans += k;
	}
	for(int i = 0; i < a.size(); ++i){
		if(a[i].first % x == 0){
			a.push_back({a[i].first / x, a[i].second * x});
			ans += a[i].first * a[i].second ;
		}
		else break;
	}
	cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}

