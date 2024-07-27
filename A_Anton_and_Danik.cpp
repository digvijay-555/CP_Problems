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
        ll a = 0;
        ll d = 0;
        for(ll i = 0; i<n; i++){
            if(s[i]=='A') a++;
            else d++;
        }
        if(a>d) cout<<"Anton"<<endl;
        else if(a<d) cout<<"Danik"<<endl;
        else cout<<"Friendship"<<endl;
    }
}