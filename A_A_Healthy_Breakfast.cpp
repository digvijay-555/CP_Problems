#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll r=-1, ss=-1;
        for(ll i = 0; i<3; i++){
            if(s[i]=='R') r = i;
            else if(s[i]=='S') ss = i;
        }
        if(r<ss) cout<<"Yes";
        else cout<<"No";
    }
}