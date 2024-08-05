#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll N = 1e3+10;
vector<vector<ll>> graph(N);
bool vis[100000];

vector<vector<ll>> cc;
vector<ll> curr_cc;

void dfs(ll vertex){
    //cout<<vertex<<" ";
    vis[vertex]=true;
    curr_cc.push_back(vertex);
    for(ll child: graph[vertex]){
        //cout<<"parent: "<<vertex<<" vertex: "<<child<<endl;
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
            graph[v2].push_back(v1);
        }
        ll ct = 0;
        for(ll i = 1; i<=n; i++){
            if(vis[i]) continue;
            curr_cc.clear();
            dfs(i);
            cc.push_back(curr_cc);
            ct++;
        }
        cout<<cc.size()<<endl;

        for(auto c_cc: cc){
            for(auto vertex: c_cc){
                cout<<vertex<<" ";
            }
            cout<<endl;
        }


    }
}