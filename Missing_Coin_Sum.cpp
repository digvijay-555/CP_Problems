#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> ms(n);
        
        for(ll i = 0; i<n; i++){
            cin>>ms[i];
        }
        sort(ms.begin(), ms.end());
        ll m = 1;
        bool flag = false;
        for(ll i = 0; i<n; i++){
            if(m<ms[i]){
                cout<<m<<endl;
                flag = true;
                break;

            }
            else {
                m+=ms[i];
            }
        }
        if(!flag) cout<<m<<endl;
    }
}