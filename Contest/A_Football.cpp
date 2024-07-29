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
        string s[n];
        for(ll i = 0; i<n; i++){
            cin>>s[i];
        }
        string s1 = s[0];
        string s2;
        ll s1s=0, s2s = 0;
        for(ll i = 0; i<n; i++){
            if(s[i]==s1){
                s1s++;
            }
            else {
                s2 = s[i];
                s2s++;
            }
        }
        if(s1s>s2s) cout<<s1;
        else cout<<s2;
    }
}