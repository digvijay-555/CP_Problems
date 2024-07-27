#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v;
        long long x = 1;
        for(ll i = 0; i<=60; i++){
            if((x<<i) & n){
                if(n-(x<<i)!=0){
                    v.push_back(n-(x<<i));
                }
            }

        }
        sort(v.begin(), v.end());
        cout<<v.size()+1<<endl;
        for(ll i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<n<<endl;
        
    }
}