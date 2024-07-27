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
        set<ll> st;
        for(ll i =0; i<n; i++){
            st.insert(i+1);
        }
        if(n==1){
            cout<<1;
            return 0;
        }
        auto it = st.find(2);
        while(!st.empty()){
            cout<<*it<<" ";
            st.erase(it);
            auto f1 = st.upper_bound(*it);
            if(f1 == st.end()) f1 = st.begin();
            auto f2 = st.upper_bound(*f1);
            if(f2 == st.end()) f2 = st.begin();
            it=f2;
        }
    }
}