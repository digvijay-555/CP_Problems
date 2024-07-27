#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll len = 1;
        ll bf = 1;
        for(ll i =1; i<s.length(); i++ ){
            if(s[i]==s[i-1]){
                bf++;
            }
            else{
                len = max(len, bf);
                bf = 1;
            }
        }
        len = max(len, bf);
        cout<<len<<endl;

    }
}