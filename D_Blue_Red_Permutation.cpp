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
        ll a[n];
        string s;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        cin>>s;
        vector<pair<ll, char>> vp(n);
        for(ll i =0; i<n; i++){
            vp[i].first=a[i];
            vp[i].second=s[i];
        }
        bool flag = false;
        sort(vp.begin(), vp.end());
        for(ll i = 0; i<n; i++){
            if(vp[i].first!=i+1){
                if(vp[i].first>i+1 && vp[i].second=='R'){
                    cout<<"NO"<<endl;
                    flag = true;
                    break;
                }
                else if(vp[i].first<i+1 && vp[i].second=='B'){
                    cout<<"NO"<<endl;
                    flag = true;
                    break;
                }
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }

    }
}