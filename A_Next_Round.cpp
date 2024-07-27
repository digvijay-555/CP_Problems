#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        bool flag = false;
        ll ct = 0;
        ll x = a[k];
        for(ll i = 0; i<n; i++){
            if(a[i]<a[k-1] || a[i]<=0) {
                flag = true;
                cout<<i<<endl;
                break;
            }

        }
        if(!flag){
            cout<<n<<endl;
        }

    }
}