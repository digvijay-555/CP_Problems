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
        string s;
        cin>>s;
        bool flag= false;
        map<ll,ll>mp;
        for(ll i=1; i<26; i++){
            mp[i]=0;
        } 
        if(n<26) cout<<"NO"<<endl;
        else {
            for(ll i = 0 ; i<n; i++){
                if(int(s[i])>90){
                    mp[s[i]-32]++;
                }
                else{
                    mp[s[i]]++;
                }
            }
            for(ll i = 65; i<=90; i++){
                if(mp[i]==0){
                    flag=true;
                    break;
                }
            }
            if(flag) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
    
}