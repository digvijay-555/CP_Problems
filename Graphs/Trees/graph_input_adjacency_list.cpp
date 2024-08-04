#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll N = 1e3+10;
vector<vector<pair<ll, ll>>> graph(N);

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        for(ll i = 0; i < m; i++){
            ll v1, v2, wt;
            cin>>v1>>v2>>wt;

            graph[v1].push_back({v2, wt});
            graph[v2].push_back({v1, wt});
        }
        
        // Print the adjacency list
        for(ll i = 1; i <= n; i++){
            cout << "Node " << i << " makes an edge with:\n";
            for(auto &edge : graph[i]){
                cout << "  Node " << edge.first << " with weight " << edge.second << endl;
            }
        }
    }
    return 0;
}
