#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll N = 1e3+9;
vector<vector<ll>> graph(N, vector<ll>(N, 0));

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        for(ll i = 0; i<m; i++){
            ll v1, v2, wt;
            cin>>v1>>v2>>wt;
            graph[v1][v2]=wt;
            graph[v2][v1]=wt;
        }

        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j<=n; j++){
                if(graph[i][j]!=0){
                    cout<<"Node "<<i<<" is connected with node "<<j<<" with weight "<<graph[i][j]<<endl;
                }
            }
        }
    }
}