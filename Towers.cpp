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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        multiset<ll> st;
        ll tw = 0;
        for(ll i = 0; i<n; i++){
            auto it = st.upper_bound(a[i]);

            if(it == st.end()){
                tw++;
                st.insert(a[i]);
            }
            else{
                st.erase(it);
                st.insert(a[i]);
            }
        }
        cout<<tw<<endl;
    }
}