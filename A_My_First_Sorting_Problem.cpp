#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        cout<<min(x, y)<<" "<<max(x, y)<<endl;
    }
}