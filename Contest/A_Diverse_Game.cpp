#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));

        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }

        if(m == 1){
            if(n == 1) {
                cout << -1 << endl;
            } else {
                
                for(ll i = 0; i<n-1; i++){
                    swap(a[i][0], a[i+1][0]);
                }

                for(ll i = 0; i < n; i++){
                    for(ll j = 0; j < m; j++){
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        } else {
            // General case for m > 1
            for(ll i = 0; i < n; i++){
                for(ll j = 0; j < m - 1; j++){
                    swap(a[i][j], a[i][j + 1]);
                }
            }
            for(ll i = 0; i < n; i++){
                for(ll j = 0; j < m; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
