#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll N = 1e3+10;
vector<vector<ll>> graph(N);
bool vis[100000];

void dfs(ll vertex){
    //cout<<vertex<<" ";
    vis[vertex]=true;
    for(ll child: graph[vertex]){
        cout<<"parent: "<<vertex<<" vertex: "<<child<<endl;
        if(vis[child]==true){
            continue;

        }

        dfs(child);
    }

}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        for(ll i = 0; i<n; i++){
            ll v1, v2;
            cin>>v1>>v2;
            graph[v1].push_back(v2);
            //graph[v2].push_back(v1);
        }
        dfs(1);


    }
}