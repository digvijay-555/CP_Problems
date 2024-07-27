#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        char a[n][m];
        for(ll i = 0; i<n; i++){
            for(ll j = 0; j<m; j++){
                cin>>a[i][j];
            }
        }
        ll x, y;
        for(ll i = 0; i<n; i++){
            for(ll j = 0; j<m; j++){
                if(a[i][j]=='#'){
                    y = j;
                    break;
                } 
            }
        }

        for(ll i = 0; i<m; i++){
            for(ll j = 0; j<n; j++){
                if(a[j][i]=='#'){
                    x = j;
                    break;
                } 
            }
        }
        cout<<x+1<<" "<<y+1<<endl;

    }
}

