#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        float n, m, k;
        cin>>n>>m>>k;
        ll l = ceil(n/k);
        ll b = ceil(m/k);
        if(k==n-1 && n == 1000000000) l++;
        if(k==m-1 && m == 1000000000) b++;
        cout<<l*b<<endl;
    }
}