#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        vector<double> vc;
        cout << fixed << setprecision(10);
        ll x = a[0]-0;
        vc.push_back(a[0]-0);
        ll y = m-a[n-1];
        vc.push_back(m-a[n-1]);
        for(ll i = 1; i<n; i++){
            vc.push_back((double(a[i]-a[i-1])/2));
        }
        sort(vc.rbegin(), vc.rend());
        if(vc[0] == x || vc[0] == y) cout<<(vc[0])<<endl;
        else cout<<(vc[0])<<endl;
        
    }
}