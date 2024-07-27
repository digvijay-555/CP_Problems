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
        string s;
        cin>>s;
        string s1;
        ll ones = 0;
        for(ll i = 0; i<s.length(); i++){
            if(s[i]=='1') ones++;
        }
        ll zeros = s.length()-ones;
        if(ones>zeros) cout<<"Yes"<<endl;
        else {
            for(ll i = 0; i<s.size(); i++){
                if(s[i]==s[i+1] && s[i]=='0'){
                    continue;
                }
                else{
                    s1.push_back(s[i]);
                }
            }

            ll one = 0;
            for(ll i = 0; i<s1.length(); i++){
                if(s1[i]=='1') one++;
            }
            ll zero = s1.length()-one;
            if(zero<one) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            
        }
    }
}